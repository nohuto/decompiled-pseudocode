/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C01C1700
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01C0640 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C01B1480 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01BAE68 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01BE5F4 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[120]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 i; // [rsp+B8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v8, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v8, v2, v3, v4) < v2 )
    {
      WdLogSingleEntry3(6LL, v2, this, *((_QWORD *)this + 8));
      v6 = -1073741801;
      goto LABEL_6;
    }
    v5 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v8, 0, 1, 1, &i);
    v6 = v5;
    if ( v5 != -1073741789 )
      break;
  }
  if ( v5 < 0 )
    WdLogSingleEntry3(2LL, v5, this, *((_QWORD *)this + 8));
  else
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v8);
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v8);
  return v6;
}
