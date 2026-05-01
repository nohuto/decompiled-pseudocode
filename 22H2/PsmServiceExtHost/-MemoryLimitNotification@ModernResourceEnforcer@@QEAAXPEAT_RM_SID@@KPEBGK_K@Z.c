/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180031A60
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x180033490 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180045B18 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180045B58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180045B70 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 *     memmove_0 @ 0x180047B2E (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x1800643A8 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        void *a6)
{
  union _RM_SID *v8; // rbp
  char *v9; // rax
  int v10; // r8d
  int v11; // r9d
  char *v12; // rsi
  ModernResourceEnforcer *v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int16 *v15; // r12
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char *v20; // rbp
  void **v21; // rax
  char v22; // r15
  size_t v23; // rbx
  char *v24; // rbx
  unsigned __int16 *v25; // rcx
  void *v26; // rax
  char *v27; // rax
  __int128 v28; // xmm1
  void *v29; // rdi
  int v30; // eax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  ModernResourceEnforcer **v33; // rcx
  unsigned __int16 *v34; // rax
  void *v35; // [rsp+30h] [rbp-68h] BYREF
  void *v36[2]; // [rsp+38h] [rbp-60h] BYREF
  void *Block[10]; // [rsp+48h] [rbp-50h] BYREF

  LODWORD(v35) = 0;
  v8 = a2;
  v9 = (char *)operator new(0x98uLL);
  v12 = v9;
  if ( !v9 )
    goto LABEL_44;
  *((_WORD *)v9 + 12) = 0;
  *((_QWORD *)v9 + 1) = v9 + 24;
  v13 = (ModernResourceEnforcer *)(v9 + 136);
  *((_QWORD *)v9 + 2) = v9 + 24;
  *((_QWORD *)v9 + 14) = 0LL;
  *((_QWORD *)v9 + 15) = 0LL;
  *((_DWORD *)v9 + 32) = 0;
  *(_OWORD *)(v9 + 136) = 0LL;
  *(_DWORD *)v9 = 1;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (unsigned __int16 *)(v9 + 24);
  v16 = 7LL;
  v17 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
  if ( v17 == v15 )
    v18 = 7LL;
  else
    v18 = (__int64)(*(_QWORD *)v15 - (_QWORD)v17) >> 1;
  if ( v14 <= v18 )
  {
    if ( v17 != a4 )
    {
      memmove_0(v17, a4, 2 * v14);
      v17 = (unsigned __int16 *)*((_QWORD *)v12 + 1);
    }
    v34 = &v17[v14];
    *((_QWORD *)v12 + 2) = v34;
    *v34 = 0;
    goto LABEL_26;
  }
  if ( v17 != v15 )
    v16 = (__int64)(*(_QWORD *)v15 - (_QWORD)v17) >> 1;
  v19 = 2 * v16 + 1;
  if ( v19 < v14 )
    v19 = v14;
  if ( v19 > 0x3FFFFFFFFFFFFFF7LL )
    v19 = 0x3FFFFFFFFFFFFFF7LL;
  if ( v14 > v19 )
  {
    v20 = 0LL;
    Block[1] = 0LL;
    v21 = Block;
    v22 = 2;
  }
  else
  {
    v36[1] = (void *)(v19 + 1);
    if ( v19 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v20 = 0LL;
      v36[0] = 0LL;
    }
    else
    {
      v20 = (char *)operator new(2 * (v19 + 1), (const struct std::nothrow_t *)&std::nothrow);
      v36[0] = v20;
    }
    v21 = v36;
    v22 = 1;
  }
  v35 = v21[1];
  *v21 = 0LL;
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( Block[0] )
      operator delete(Block[0]);
  }
  if ( (v22 & 1) != 0 && v36[0] )
    operator delete(v36[0]);
  if ( !v20 )
  {
    ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
      (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v12,
      v18);
LABEL_44:
    v29 = a6;
    goto LABEL_30;
  }
  v23 = 2 * v14;
  memcpy_0(v20, a4, v23);
  v24 = &v20[v23];
  *(_WORD *)v24 = 0;
  v25 = (unsigned __int16 *)*((_QWORD *)v12 + 1);
  if ( v25 != v15 )
    operator delete(v25);
  v26 = v35;
  *((_QWORD *)v12 + 1) = v20;
  *((_QWORD *)v12 + 2) = v24;
  v27 = &v20[2 * (_QWORD)v26 - 2];
  v8 = a2;
  *(_QWORD *)v15 = v27;
LABEL_26:
  v28 = *((_OWORD *)v8 + 1);
  v29 = a6;
  *(_OWORD *)(v12 + 40) = *(_OWORD *)v8;
  *((_DWORD *)v12 + 28) = a5;
  v30 = *((_DWORD *)v8 + 16);
  v31 = *((_OWORD *)v8 + 2);
  *((_QWORD *)v12 + 15) = a6;
  *(_OWORD *)(v12 + 56) = v28;
  *((_DWORD *)v12 + 32) = 1;
  v32 = *((_OWORD *)v8 + 3);
  *(_OWORD *)(v12 + 72) = v31;
  *(_OWORD *)(v12 + 88) = v32;
  *((_DWORD *)v12 + 26) = v30;
  *((_DWORD *)v12 + 27) = a3;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v33 = (ModernResourceEnforcer **)*((_QWORD *)this + 35);
  if ( *v33 != (ModernResourceEnforcer *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v13 = (char *)this + 272;
  *((_QWORD *)v13 + 1) = v33;
  *v33 = v13;
  *((_QWORD *)this + 35) = v13;
  if ( (*((_BYTE *)this + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 33));
    *((_DWORD *)this + 74) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
LABEL_30:
  if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v36[0] = v29;
    LODWORD(v35) = -1073741801;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009AB54,
      v10,
      v11,
      (__int64)&v35,
      (__int64)v36);
  }
}
