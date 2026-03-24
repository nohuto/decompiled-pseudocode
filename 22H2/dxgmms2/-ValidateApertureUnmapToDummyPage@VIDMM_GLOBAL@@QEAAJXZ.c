/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C90F0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00868E8 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(VIDMM_GLOBAL *this)
{
  int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rdx
  _DWORD *v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // r8
  __int64 v13; // rax
  __int64 i; // rbp
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v16 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  v4 = *((unsigned int *)this + 926);
  if ( !(_DWORD)v4 )
    goto LABEL_4;
  while ( 1 )
  {
    v5 = *(_DWORD **)(*((_QWORD *)this + 464) + 8 * v3);
    v6 = (unsigned int)v3;
    if ( (v5[20] & 1) == 0 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= (unsigned int)v4 )
      goto LABEL_4;
  }
  if ( (_DWORD)v3 == 255 )
  {
LABEL_4:
    v7 = WdLogNewEntry5_WdWarning(v3, v4);
    WdLogEvent5_WdWarning(v7);
    v6 = 255LL;
  }
  else
  {
    v1 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *, __int64 *))(*(_QWORD *)v5 + 184LL))(
           v5,
           1LL,
           &v16,
           &v15);
    if ( v1 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v10, v12);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
      {
        v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 464) + 8 * i) + 144LL))(
               *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i),
               *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6),
               v15);
        if ( v1 < 0 )
          break;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdWarning(v11, v10);
      WdLogEvent5_WdWarning(v13);
      v1 = -1073741801;
    }
  }
  if ( v16 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 192LL))(v8);
  }
  return (unsigned int)v1;
}
