/*
 * XREFs of PopProcessWakeSourceWork @ 0x1408E6CC4
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x14056F420 (PopUpdateWakeSourceWorker.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 *     PopFreeWakeSource @ 0x1408E6BF8 (PopFreeWakeSource.c)
 *     PopNewWakeSource @ 0x1408E6C74 (PopNewWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1408E6E8C (PopWakeSourceGetDeviceProperty.c)
 *     PopWakeSourceIsParent @ 0x1408E6F58 (PopWakeSourceIsParent.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopProcessWakeSourceWork(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // r12d
  _QWORD **v7; // r15
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  unsigned int v10; // edi
  unsigned __int16 *i; // rax
  unsigned __int16 *v12; // rbx
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  PVOID PoolWithTag; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  if ( v3 )
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(v5 + 152);
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 24) + 24LL);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( !*((_DWORD *)v9 + 4) )
    {
      if ( *((_DWORD *)v9 + 18) <= v6 )
      {
        if ( *((_DWORD *)v9 + 18) < v6 )
        {
          for ( i = *(unsigned __int16 **)(v5 + 16); ; i = (unsigned __int16 *)*((_QWORD *)v12 + 2) )
          {
            v12 = 0LL;
            if ( i != IopRootDeviceNode )
              v12 = i;
            if ( !v12 )
              break;
            if ( v12[20] == *((_WORD *)v9 + 12)
              && !wcsncmp(*((const wchar_t **)v12 + 6), (const wchar_t *)v9[4], (unsigned __int64)v12[20] >> 1) )
            {
              v4 = v9;
              goto LABEL_20;
            }
          }
        }
      }
      else if ( (unsigned __int8)PopWakeSourceIsParent(v5, v9 + 3) )
      {
        v10 = -1073741823;
LABEL_24:
        v4 = 0LL;
        v14 = 0LL;
        goto LABEL_26;
      }
    }
  }
LABEL_20:
  v13 = PopNewWakeSource(0);
  v14 = v13;
  if ( !v13 )
  {
    v10 = -1073741670;
    goto LABEL_24;
  }
  v13[18] = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(v5 + 40), 0x206D654Du);
  *((_QWORD *)v14 + 4) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    PopFreeWakeSource(v14);
    goto LABEL_24;
  }
  *((_WORD *)v14 + 13) = *(_WORD *)(v5 + 40);
  RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 6), (PCUNICODE_STRING)(v5 + 40));
  PopWakeSourceGetDeviceProperty(v14 + 10, 9LL, v3);
  PopWakeSourceGetDeviceProperty(v14 + 14, 0LL, v3);
  v10 = 0;
LABEL_26:
  *a2 = v14;
  *a3 = v4;
  return v10;
}
