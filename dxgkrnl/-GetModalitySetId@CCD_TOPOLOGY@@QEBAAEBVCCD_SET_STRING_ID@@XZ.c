/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01C1A1C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01C0640 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C0D10 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C01C3A50 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01BB1EC (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01BB2A4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C01BD614 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01C0374 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01C260C (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2374::__AUTO_USING_PM_MapIndex2374 @ 0x1C01C2754 (_CCD_TOPOLOGY--GetModalitySetId_--_2_--_AUTO_USING_PM_MapIndex2374--__AUTO_USING_PM_MapIndex2374.c)
 */

void **__fastcall CCD_TOPOLOGY::GetModalitySetId(void **this)
{
  unsigned __int16 v1; // bx
  unsigned __int16 *v3; // rsi
  unsigned __int16 v4; // r8
  unsigned __int16 *v5; // rcx
  unsigned int v6; // edx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  CCD_SET_STRING_ID *v9; // rax
  _WORD *v10; // rax
  __int16 v11; // cx
  _WORD *v12; // rdx
  unsigned int i; // r8d
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr00_8
  __int64 v20; // rax
  _WORD *v21; // r8
  unsigned int j; // r8d
  _WORD *v23; // rdx
  unsigned __int16 v24; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-68h] BYREF
  char *v26; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-50h]
  _BYTE v28[64]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v3 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, 256LL);
    if ( v3 )
    {
      v5 = (unsigned __int16 *)this[8];
      v6 = v5[10];
      v26 = (char *)(v5 + 28);
      v27 = v6;
      if ( v6 )
      {
        v7 = v5 + 156;
        v8 = v6;
        do
        {
          *v7 |= 2u;
          v7[2] = 0;
          v7 += 74;
          --v8;
        }
        while ( v8 );
      }
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr((CCD_TOPOLOGY *)this, v3, v4) < 0 )
        goto LABEL_21;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v3);
      v9 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v28, &DestinationString);
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this, (__int64)v9);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v28);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v10 = this[8];
        if ( v10 )
          v11 = v10[10];
        else
          v11 = 0;
        if ( v11 != *((_WORD *)this + 16) )
          WdLogSingleEntry0(1LL);
        v12 = this[8];
        for ( i = 0; ; ++i )
        {
          v14 = v12 ? v12[10] : 0;
          if ( i >= v14 || *(_DWORD *)&v12[148 * i + 160] != i )
            break;
        }
        if ( v12 )
          v15 = v12[10];
        else
          v15 = 0;
        if ( i >= v15 )
          goto LABEL_21;
        if ( v12 )
          v17 = v12[10];
        else
          v17 = 0;
        v19 = v17;
        v18 = 2LL * v17;
        if ( !is_mul_ok(v19, 2uLL) )
          v18 = -1LL;
        v20 = operator new[](v18, 0x63644356u, 256LL);
        this[7] = (void *)v20;
        if ( v20 )
        {
          for ( j = 0; ; ++j )
          {
            v23 = this[8];
            v24 = v23 ? v23[10] : 0;
            if ( j >= v24 )
              break;
            *((_WORD *)this[7] + *(unsigned int *)&v23[148 * j + 160]) = j;
          }
          goto LABEL_21;
        }
        v21 = this[8];
        if ( v21 )
          v1 = v21[10];
        WdLogSingleEntry3(6LL, this, v21, v1);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
LABEL_21:
      operator delete(v3);
      CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2374::__AUTO_USING_PM_MapIndex2374(&v26);
    }
  }
  return this;
}
