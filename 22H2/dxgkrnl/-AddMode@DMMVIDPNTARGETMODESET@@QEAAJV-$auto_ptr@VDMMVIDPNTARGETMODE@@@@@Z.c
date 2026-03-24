/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C011D6F4
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C011D7A0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0006E94 (-Add@-$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0006FC4 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000C988 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004D440 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax

  v2 = *a2;
  if ( !*a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v12);
    v2 = *a2;
  }
  v5 = IndexedSet<DMMVIDPNTARGETMODE>::FindById(a1 + 24, v2[6]);
  if ( v5 )
    LODWORD(v8) = DMMVIDPNTARGETMODE::operator!=(v5, v6);
  else
    LODWORD(v8) = Set<DMMVIDPNTARGETMODE>::Add(a1 + 24, v6) != 0 ? 2 : 0;
  v8 = (unsigned int)v8;
  if ( !(_DWORD)v8 )
  {
    v18 = WdLogNewEntry5_WdTrace(v8, v7);
    v14 = -1071774956;
    *(_QWORD *)(v18 + 24) = *a2;
    *(_QWORD *)(v18 + 32) = a1;
    goto LABEL_18;
  }
  v9 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v9 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v9, v7);
    v17[3] = (*a2)[6];
    v17[4] = *a2;
    v17[5] = a1;
    WdLogEvent5_WdError(v17);
    v14 = -1071774940;
    goto LABEL_18;
  }
  if ( (_DWORD)v9 != 1 )
  {
    v13 = WdLogNewEntry5_WdError(v9, v7);
    WdLogEvent5_WdError(v13);
    v14 = -1073741823;
LABEL_18:
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return v14;
  }
  v10 = (__int64)(*a2 + 8);
  if ( a1 )
  {
    if ( *((_QWORD *)*a2 + 5) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9, v7);
      WdLogEvent5_WdAssertion(v16);
    }
    *(_QWORD *)(v10 + 8) = a1;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v9, v7);
    *(_QWORD *)(v15 + 24) = v10;
    *(_QWORD *)(v15 + 32) = *(_QWORD *)(v10 + 8);
    WdLogEvent5_WdError(v15);
  }
  *a2 = 0LL;
  return 0LL;
}
