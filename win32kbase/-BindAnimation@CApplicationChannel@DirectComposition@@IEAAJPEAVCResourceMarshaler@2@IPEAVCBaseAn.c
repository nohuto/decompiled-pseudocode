/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C005B08C
 * Callers:
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C005AF8C (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 * Callees:
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C000D7C0 (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C005AC8C (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?NewAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C005B25C (-NewAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C005B284 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C005B2F4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C005B370 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00609AC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C024AC7C (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C024BFF0 (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C024C088 (-RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C024CF60 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        struct DirectComposition::CAnimationBinding ***this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  struct DirectComposition::CBaseAnimation **v7; // r15
  struct DirectComposition::CBaseAnimation **v8; // r12
  struct DirectComposition::CAnimationBinding *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  DirectComposition::CApplicationChannel *v12; // rcx
  __int64 v13; // rbx
  struct DirectComposition::CAnimationBinding **v14; // rbx
  unsigned int v15; // edi
  DirectComposition::CAnimationBinding *v16; // r13
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  DirectComposition::CAnimationMarshaler *v22; // rdi
  struct DirectComposition::CAnimationBinding *v23; // [rsp+30h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v24; // [rsp+38h] [rbp-8h] BYREF
  struct DirectComposition::CAnimationBinding *v27; // [rsp+98h] [rbp+58h] BYREF

  v23 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v23, &v27, &v24);
  v7 = (struct DirectComposition::CBaseAnimation **)v23;
  v8 = (struct DirectComposition::CBaseAnimation **)v27;
  v9 = v27;
  if ( v23 )
    v9 = v23;
  v27 = v9;
  v10 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
  v13 = v11;
  if ( !v11 || !*(_DWORD *)(v11 + 156) )
    goto LABEL_5;
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v18 = 0LL;
  LODWORD(v23) = 0;
  if ( v27 )
  {
    v19 = (***((__int64 (__fastcall ****)(_QWORD))v27 + 3))(*((_QWORD *)v27 + 3));
    v18 = v19;
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 160LL))(v19);
      if ( v20 )
      {
        LODWORD(v23) = *(_DWORD *)(v20 + 72);
        goto LABEL_24;
      }
    }
  }
  (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, struct DirectComposition::CAnimationBinding **))(*(_QWORD *)a2 + 280LL))(
    a2,
    a3,
    &v23);
  if ( v18 )
  {
LABEL_24:
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 80LL))(v18);
    v22 = (DirectComposition::CAnimationMarshaler *)v21;
    if ( v21 )
    {
      if ( *(_QWORD *)(v13 + 168) || (*(_DWORD *)(v13 + 32) & 0x1000) != 0 || v21 == v13 )
        return (unsigned int)-1073741811;
      *(_QWORD *)(v13 + 168) = v21;
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(v21 + 16));
      LOBYTE(v27) = 0;
      DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
        v22,
        (bool *)&v27,
        (__int64 *)(v13 + 184),
        (unsigned __int64 *)(v13 + 192));
      *(_BYTE *)(v13 + 200) ^= (*(_BYTE *)(v13 + 200) ^ (unsigned __int8)v27) & 1;
      *((_DWORD *)v22 + 8) |= 0x1000u;
    }
  }
  *(_DWORD *)(v13 + 176) = (_DWORD)v23;
LABEL_5:
  v14 = (struct DirectComposition::CAnimationBinding **)v24;
  v15 = 0;
  if ( !v8 )
  {
    if ( v7 && v7[3] != a4 || v24 && *((struct DirectComposition::CBaseAnimation **)v24 + 3) != a4 )
      goto LABEL_10;
    if ( v7 )
      goto LABEL_35;
    if ( !v24 )
    {
LABEL_10:
      v24 = 0LL;
      v16 = (DirectComposition::CAnimationBinding *)this[44];
      if ( v16 )
      {
        this[44] = 0LL;
        DirectComposition::CAnimationBinding::Initialize(v16, a2, a3, a4);
      }
      else
      {
        v15 = DirectComposition::CAnimationBinding::Create(a2, a3, a4, &v24);
        if ( (v15 & 0x80000000) != 0 )
          return v15;
        v16 = v24;
      }
      DirectComposition::CApplicationChannel::NewAddingBinding((DirectComposition::CApplicationChannel *)this, v16);
    }
  }
  if ( !v7 )
  {
    if ( v14 && v14[3] == a4 )
    {
      if ( this[57] )
        DirectComposition::CApplicationChannel::RemoveFromBatchList(v12, v14, this + 57);
      DirectComposition::CAnimationBinding::RemovingToBound((DirectComposition::CAnimationBinding *)v14);
      if ( v8 )
        DirectComposition::CApplicationChannel::DeleteAddingBinding(
          (DirectComposition::CApplicationChannel *)this,
          (struct DirectComposition::CAnimationBinding *)v8);
    }
    else if ( v8 && v8[3] != a4 )
    {
      DirectComposition::CAnimationBinding::Reassign(
        (DirectComposition::CAnimationBinding *)v8,
        a4,
        (struct DirectComposition::CApplicationChannel *)this);
    }
    return v15;
  }
LABEL_35:
  if ( v7[3] != a4 )
    DirectComposition::CApplicationChannel::NewRemovingBinding(
      (DirectComposition::CApplicationChannel *)this,
      (struct DirectComposition::CAnimationBinding *)v7);
  return v15;
}
