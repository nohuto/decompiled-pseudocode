/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x1800748D0
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x180074110 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x18008A4D0 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x1800E41D4 (LdrpResMapFile.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x180013570 (RtlReleaseActivationContext.c)
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180033B68 (LdrpInitMuiCrits.c)
 *     _wcsicmp @ 0x18008E340 (_wcsicmp.c)
 */

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  wchar_t *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  bool v11; // zf
  int v12; // esi
  __int64 v13; // r14
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 Heap; // rax
  int v25; // [rsp+24h] [rbp-34h]

  if ( String2 )
  {
    v7 = 0LL;
    v8 = -1073741511;
    LdrpInitMuiCrits();
    RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
    v10 = (unsigned int)LoadAsDataTableCount;
    if ( LoadAsDataTableCount )
    {
      if ( (a4 & 0xE00) == 0 )
      {
        v9 = LoadAsDataTable;
        goto LABEL_5;
      }
      if ( a2 )
      {
        *a2 = 0LL;
        v16 = v10;
        v9 = LoadAsDataTable;
        while ( v16 )
        {
          if ( (a4 & 0x800) != 0 )
          {
            v17 = 48LL * (unsigned int)(v16 - 1);
            if ( *(wchar_t **)(v17 + v9 + 24) == String2 )
            {
              v7 = *(wchar_t **)(v17 + v9);
              break;
            }
          }
          else if ( (a4 & 0x400) != 0
                 && (v18 = (unsigned int)(v16 - 1), v19 = 6 * v18, (v20 = *(const wchar_t **)(v9 + 48 * v18 + 8)) != 0LL) )
          {
            if ( !wcsicmp(v20, String2) )
            {
              v9 = LoadAsDataTable;
              v7 = *(wchar_t **)(LoadAsDataTable + 8 * v19);
              v10 = (unsigned int)LoadAsDataTableCount;
              break;
            }
            v10 = (unsigned int)LoadAsDataTableCount;
            v9 = LoadAsDataTable;
          }
          else if ( (a4 & 0x200) != 0 )
          {
            v21 = 48LL * (unsigned int)(v16 - 1);
            if ( *(wchar_t **)(v21 + v9) == String2 )
            {
              v7 = *(wchar_t **)(v21 + v9);
              break;
            }
          }
          --v16;
        }
        if ( v7 )
          *a2 = v7;
        if ( (a4 & 0x200000) != 0 )
        {
          if ( v7 && a3 )
          {
            v10 = 6LL * (unsigned int)(v16 - 1);
            *a3 = *(_QWORD *)(v9 + 48LL * (unsigned int)(v16 - 1) + 16);
            if ( (a4 & 0x40000) != 0 )
              ++*(_DWORD *)(v9 + 48LL * (unsigned int)(v16 - 1) + 32);
            v8 = 0;
          }
        }
        else
        {
          v11 = v7 == 0LL;
          if ( !v7 )
          {
LABEL_6:
            if ( v11 )
              v7 = String2;
            v12 = v10;
            v25 = v10;
            while ( v12 )
            {
              v13 = (unsigned int)(v12 - 1);
              if ( *(wchar_t **)(v9 + 48 * v13) == v7 )
              {
                if ( *(_QWORD *)(v9 + 48 * v13 + 8) )
                {
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v9 + 48 * v13 + 8));
                  v9 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 48 * v13 + 8) = 0LL;
                  v12 = v25;
                  LODWORD(v10) = LoadAsDataTableCount;
                }
                v14 = *(volatile signed __int32 **)(v9 + 48 * v13 + 40);
                if ( (unsigned __int64)v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v9 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 48 * v13 + 40) = 0LL;
                  LODWORD(v10) = LoadAsDataTableCount;
                }
                if ( v12 != (_DWORD)v10 )
                {
                  *(_OWORD *)(v9 + 48 * v13) = *(_OWORD *)(v9 + 48LL * (unsigned int)(v10 - 1));
                  *(_OWORD *)(v9 + 48 * v13 + 16) = *(_OWORD *)(v9 + 48LL * (unsigned int)(v10 - 1) + 16);
                  *(_OWORD *)(v9 + 48 * v13 + 32) = *(_OWORD *)(v9 + 48LL * (unsigned int)(v10 - 1) + 32);
                }
                v10 = (unsigned int)(v10 - 1);
                LoadAsDataTableCount = v10;
                v15 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( (unsigned int)v10 < (unsigned int)v15 )
                {
                  Heap = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, LoadAsDataTable, 48 * v15);
                  v9 = Heap;
                  if ( !Heap )
                  {
                    v8 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap;
                  LoadAsDataTableBlockCount -= 32;
                  v10 = (unsigned int)LoadAsDataTableCount;
                }
                v8 = 0;
              }
              v12 = v13;
              v25 = v13;
            }
            goto LABEL_50;
          }
          v22 = 48LL * (unsigned int)(v16 - 1);
          if ( (int)--*(_DWORD *)(v22 + v9 + 32) <= 0 )
          {
LABEL_5:
            v11 = v7 == 0LL;
            goto LABEL_6;
          }
          v8 = -1073740024;
        }
      }
      else
      {
        v8 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection((__int64)&LoadAsDataCrits, v9, v10);
    return v8;
  }
  return 3221225485LL;
}
