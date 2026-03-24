/*
 * XREFs of ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0150254
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0150390 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C013A304 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C013CEB4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C013DEF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C013F8EC (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C014FF00 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 */

__int64 __fastcall CDS_JOURNAL::_FillTopology(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2, int a3)
{
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned __int16 v21; // [rsp+68h] [rbp+20h] BYREF

  CCD_TOPOLOGY::Clear(this);
  v6 = 0;
  while ( 1 )
  {
    v21 = v6 + 1;
    v7 = CCD_TOPOLOGY::Reserve(this, (unsigned __int16)(v6 + 1));
    if ( v7 < v21 )
      break;
    if ( a3 == 15 )
    {
      v12 = CCD_TOPOLOGY::RetrievePersisted(this, 0xFu, &v21);
    }
    else
    {
      if ( a3 != 64 )
      {
        LODWORD(v13) = -1073741811;
        goto LABEL_25;
      }
      v12 = CCD_TOPOLOGY::RetrieveActive(this, 0, 0, 0, &v21);
    }
    LODWORD(v13) = v12;
    if ( v12 >= 0
      && a2
      && ((v14 = *((_QWORD *)this + 8)) == 0 ? (v8 = 0LL) : (v8 = *(unsigned __int16 *)(v14 + 20)),
          !v14 ? (v9 = 0LL) : (v9 = *(unsigned __int16 *)(v14 + 22)),
          (unsigned __int16)v8 >= (unsigned __int16)v9) )
    {
      LODWORD(v13) = -1073741789;
      v6 = ++v21;
    }
    else
    {
      v6 = v21;
    }
    if ( (_DWORD)v13 != -1073741789 )
    {
      if ( (int)v13 >= 0 )
      {
        if ( !a2 )
          return (unsigned int)v13;
        if ( a3 != 64 )
          return (unsigned int)v13;
        v15 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 1);
        v13 = v15;
        if ( v15 >= 0 )
          return (unsigned int)v13;
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
        v19[3] = v13;
LABEL_27:
        v19[4] = this;
        v19[5] = *((_QWORD *)this + 8);
        v19[6] = a2;
        WdLogEvent5_WdError(v19);
        return (unsigned int)v13;
      }
LABEL_25:
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v19[3] = (int)v13;
      goto LABEL_27;
    }
  }
  v20 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
  *(_QWORD *)(v20 + 24) = v21;
  WdLogEvent5_WdLowResource(v20);
  return 3221225495LL;
}
