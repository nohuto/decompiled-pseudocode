/*
 * XREFs of PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140958F20
 * Callers:
 *     PiDqActionDataCreate @ 0x140746614 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406CB9F8 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqOpenObjectRegKey @ 0x140747218 (PiDqOpenObjectRegKey.c)
 *     PiDqGrowPropertyArray @ 0x14083AE68 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14083AEDC (PiDqPnPGetObjectPropertyKeys.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInBestLanguage(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        const wchar_t *a5,
        const void **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  PVOID v8; // rbx
  int v9; // esi
  int v10; // r12d
  int v11; // edi
  __int64 v12; // r9
  unsigned int *v13; // r14
  unsigned int v14; // eax
  const void **v15; // r15
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // esi
  const wchar_t *v19; // r13
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  PVOID v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h]

  v25 = a4;
  Handle = 0LL;
  v8 = 0LL;
  v24 = 0;
  v9 = a4;
  v22 = 0LL;
  v10 = 0;
  if ( a2 != 1 )
    v10 = a3;
  v11 = PiDqOpenObjectRegKey(a2, a4, a3, 1, 0, a1, &Handle);
  if ( v11 >= 0 )
  {
    v11 = PiDqPnPGetObjectPropertyKeys(v9, v10, (__int64)Handle, v12, &v22, &v24);
    if ( v11 >= 0 )
    {
      v13 = a7;
      v14 = v24;
      v15 = a6;
      v16 = *a7;
      v17 = *a7 + v24;
      if ( *a8 < v17 )
      {
        *a8 = v17;
        v11 = PiDqGrowPropertyArray(v15, v16, v17);
        if ( v11 < 0 )
          goto LABEL_13;
        v14 = v24;
      }
      v18 = 0;
      if ( v14 )
      {
        v19 = a5;
        v8 = v22;
        do
        {
          v11 = PiDqPnPGetObjectPropertyInBestLocale(
                  v25,
                  v10,
                  (int)Handle,
                  (unsigned int)v8 + 20 * v18,
                  a2,
                  v19,
                  (_OWORD *)*v15 + 3 * *v13);
          if ( v11 < 0 )
            break;
          ++*v13;
          ++v18;
        }
        while ( v18 < v24 );
        goto LABEL_14;
      }
    }
LABEL_13:
    v8 = v22;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x58706E50u);
  return (unsigned int)v11;
}
