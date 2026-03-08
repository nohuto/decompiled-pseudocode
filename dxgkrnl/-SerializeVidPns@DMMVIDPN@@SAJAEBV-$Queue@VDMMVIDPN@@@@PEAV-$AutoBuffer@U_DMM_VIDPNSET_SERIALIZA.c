/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B4AFC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A6C1C (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004B3A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00670E4 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C006850C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068A3C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03B4680 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, _QWORD *a2)
{
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // di
  unsigned __int8 *v22; // r8
  unsigned __int8 *v23; // r14
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD v26[2]; // [rsp+20h] [rbp-40h] BYREF
  int v27; // [rsp+30h] [rbp-30h]
  _QWORD v28[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-18h]
  int v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v32)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v27 = 0;
    v26[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v5 = a1 + 24;
    v6 = *(_QWORD *)(a1 + 24);
    v26[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v28[1] = v28;
    v7 = 0LL;
    v29 = 0LL;
    v8 = v28;
    v28[0] = v28;
    v30 = 2;
    v31 = 0LL;
    if ( v6 == a1 + 24 || (v9 = v6 - 8) == 0 )
    {
LABEL_16:
      v15 = 1LL;
      if ( v7 > 1 )
        v15 = v7;
      v16 = 4 * v15 + 4;
      if ( v8 != v28 )
      {
        v17 = v8 - 1;
        while ( v17 )
        {
          v16 += v17[5];
          v18 = (_QWORD *)v17[1];
          v17 = v18 - 1;
          if ( v18 == v28 )
            v17 = 0LL;
        }
      }
      v19 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v16);
      v13 = v19;
      if ( v19 >= 0 )
      {
        v20 = 1;
        v21 = 0;
        *(_BYTE *)a2[4] = v29;
        v22 = (unsigned __int8 *)a2[4];
        if ( *v22 > 1u )
          v20 = *v22;
        v23 = &v22[4 * v20 + 4];
        if ( (_QWORD *)v28[0] != v28 )
        {
          v24 = v28[0] - 8LL;
          if ( v28[0] != 8LL )
          {
            do
            {
              *(_DWORD *)(a2[4] + 4LL * v21 + 4) = (_DWORD)v23 - *((_DWORD *)a2 + 8);
              memmove(v23, *(const void **)(v24 + 32), *(_QWORD *)(v24 + 40));
              v23 += *(_QWORD *)(v24 + 40);
              v25 = *(_QWORD **)(v24 + 8);
              v24 = (__int64)(v25 - 1);
              if ( v25 == v28 )
                v24 = 0LL;
              ++v21;
            }
            while ( v24 );
          }
        }
        if ( v21 != *(_BYTE *)a2[4] )
          WdLogSingleEntry0(1LL);
        v13 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v19);
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)operator new[](0x38uLL, 0x4E506456u, 256LL);
        v11 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
        if ( v10 )
        {
          v10[1] = 0LL;
          v10[2] = 0LL;
          *v10 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
          v10[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
          v10[4] = 0LL;
          v10[5] = 0LL;
          v10[6] = 256LL;
        }
        else
        {
          v11 = 0LL;
        }
        v32 = v11;
        if ( !v11 )
          break;
        v12 = DMMVIDPN::Serialize(v9, (__int64)v11);
        v13 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry2(2LL, v9, v12);
          goto LABEL_27;
        }
        v32 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v26, (__int64)v11);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v32);
        v14 = *(_QWORD *)(v9 + 8);
        v9 = v14 - 8;
        if ( v14 == v5 )
          v9 = 0LL;
        if ( !v9 )
        {
          v7 = v29;
          v8 = (_QWORD *)v28[0];
          goto LABEL_16;
        }
      }
      WdLogSingleEntry2(6LL, 56LL, v9);
      v13 = -1073741801;
LABEL_27:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v32);
    }
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v26);
    return v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
