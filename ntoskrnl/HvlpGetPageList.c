/*
 * XREFs of HvlpGetPageList @ 0x140547DF4
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140544D14 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140544F20 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1405458B8 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x140547EC8 (HvlpInvokeGetPageListHypercall.c)
 */

__int64 __fastcall HvlpGetPageList(int a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int16 v5; // ax
  __int16 *v6; // rbx
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // r8
  unsigned __int64 v11; // rcx

  *a2 = 0LL;
  *a3 = 0;
  if ( a1 )
  {
    v5 = HvlpIteratorCrashdump;
    v6 = &HvlpIteratorCrashdump;
  }
  else
  {
    v5 = HvlpIteratorHibernate;
    v6 = &HvlpIteratorHibernate;
  }
  if ( !*((_BYTE *)v6 + 2) )
    return 0LL;
  v8 = *((_QWORD *)v6 + 1);
  v9 = 261;
  if ( v5 < *(_WORD *)(v8 + 8) )
  {
LABEL_9:
    v10 = (unsigned __int16)*v6;
    v11 = *(_QWORD *)(v8 + 8 * v10 + 16);
    *a2 = v11 & 0xFFFFFFFFFFLL;
    *a3 = (v11 >> 40) + 1;
    *v6 = v10 + 1;
  }
  else
  {
    while ( *(_QWORD *)v8 != -1LL )
    {
      HvlpInvokeGetPageListHypercall(v6, *(_QWORD *)v8);
      *v6 = 0;
      if ( *(_WORD *)(v8 + 8) )
        goto LABEL_9;
    }
    return 0;
  }
  return v9;
}
