__int64 __fastcall ExPoolSetLimit(void *Src, size_t Size, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v5; // rdi
  NTSTATUS inserted; // ebx
  _DWORD *Pool2; // rax
  int v8; // eax
  _BYTE *v9; // rdx
  unsigned __int64 v10; // r8
  _BYTE *v11; // rcx
  int v12; // eax
  __int64 v13; // r9
  ULONGLONG pullResult; // [rsp+58h] [rbp+20h] BYREF

  pullResult = 0LL;
  v5 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
  {
    inserted = -1073741727;
    goto LABEL_27;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  inserted = RtlRunOnceExecuteOnce(&ExpPlInitOnceVar, ExpPlRunOnceInit, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, Size, 1819242320LL);
    v5 = Pool2;
    if ( !Pool2 )
    {
      inserted = -1073741670;
      goto LABEL_27;
    }
    memmove(Pool2, Src, Size);
    if ( *v5 != 1 )
      goto LABEL_10;
    v8 = v5[1];
    if ( !v8 )
      goto LABEL_10;
    inserted = RtlULongLongMult((unsigned int)(v8 - 1), 0x30uLL, &pullResult);
    if ( inserted < 0 )
      goto LABEL_27;
    if ( pullResult >= 0xFFFFFFFFFFFFFFC8uLL )
    {
      inserted = -1073741675;
      goto LABEL_27;
    }
    if ( pullResult + 56 > Size )
    {
LABEL_5:
      inserted = -1073741820;
      goto LABEL_27;
    }
    v10 = 0LL;
    if ( v5[1] )
    {
      v11 = v5 + 4;
LABEL_18:
      v12 = *((_DWORD *)v11 - 2);
      if ( v12 != 1819242320 && v12 )
      {
        v13 = 0LL;
        v9 = v11;
        while ( (*v9 & 0xF) == 0 && (v9[8] & 0xF) == 0 )
        {
          ++v13;
          v9 += 16;
          if ( v13 >= 2 )
          {
            ++v10;
            v11 += 48;
            if ( v10 < (unsigned int)v5[1] )
              goto LABEL_18;
            goto LABEL_25;
          }
        }
      }
LABEL_10:
      inserted = -1073741811;
      goto LABEL_27;
    }
LABEL_25:
    inserted = ExpTrackTableInsertLimit(v5, v9, v10);
    if ( inserted >= 0 )
      inserted = 0;
  }
LABEL_27:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inserted;
}
