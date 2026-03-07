__int64 __fastcall RegRtlDeleteTreeInternal(void *a1, const WCHAR *a2, __int64 a3, char a4)
{
  int v4; // r14d
  _WORD *Pool2; // rsi
  unsigned int v8; // r15d
  int v10; // ebx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 LowLimit; // [rsp+48h] [rbp-8h] BYREF

  v4 = 0;
  Handle = 0LL;
  v17 = 0;
  HighLimit = 0LL;
  Pool2 = 0LL;
  LowLimit = 0LL;
  v8 = 0;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v10 = -1073741670;
    goto LABEL_3;
  }
  v10 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v10 < 0 )
    goto LABEL_3;
  if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)Handle, 0, (unsigned int)&v17, 0, 0LL, 0LL) )
  {
    LODWORD(v13) = 0;
    goto LABEL_12;
  }
  v12 = v17;
  if ( v17 )
  {
    if ( v17 + 1 < v17 )
      goto LABEL_16;
    v12 = v17 + 1;
  }
  v13 = 2LL * v12;
  if ( v13 > 0xFFFFFFFF )
  {
LABEL_16:
    v10 = -1073741675;
    goto LABEL_3;
  }
  v10 = 0;
  if ( (_DWORD)v13 )
    goto LABEL_27;
  do
  {
    while ( 1 )
    {
LABEL_12:
      while ( 1 )
      {
        v17 = (unsigned int)v13 >> 1;
        v14 = RegRtlEnumKey(Handle);
        if ( v14 != -2147483622 && v14 != -1073741444 )
          break;
LABEL_13:
        v16 = RegRtlDeleteKeyTransacted(a1, a2, a3);
        if ( v16 != -1073741535 )
        {
          if ( v16 >= 0 )
            goto LABEL_3;
LABEL_15:
          v10 = v16;
          goto LABEL_3;
        }
        if ( v4 || v8 >= 0xA )
          goto LABEL_15;
        ++v8;
        v4 = 0;
      }
      if ( v14 == -1073741789 )
        break;
      if ( v14 )
        goto LABEL_13;
      LOBYTE(v15) = a4;
      Pool2[((unsigned __int64)(unsigned int)v13 >> 1) - 1] = 0;
      if ( (unsigned int)RegRtlDeleteTreeInternal(Handle, Pool2, a3, v15) )
        ++v4;
      else
        v4 = 0;
    }
    v13 = 2LL * v17;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_16;
    v10 = 0;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
LABEL_27:
    Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned int)v13, 1279739218LL);
  }
  while ( Pool2 );
  v10 = -1073741801;
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v10;
}
