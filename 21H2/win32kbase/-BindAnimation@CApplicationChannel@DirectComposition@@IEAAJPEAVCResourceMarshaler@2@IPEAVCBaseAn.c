/*
 * XREFs of ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C008418C
 * Callers:
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0084088 (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0012B1C (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?NewAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00842F8 (-NewAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C0084320 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C00843B0 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C00861FC (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C00B44F0 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C00C52D0 (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0214948 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C0215640 (-Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel.c)
 *     ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C02156D8 (-RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C02157E4 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BindAnimation(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  struct DirectComposition::CBaseAnimation **v7; // r15
  struct DirectComposition::CBaseAnimation **v8; // r12
  struct DirectComposition::CAnimationBinding *v9; // rax
  __int64 v10; // rax
  DirectComposition::CApplicationChannel *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  struct DirectComposition::CBaseAnimation **v14; // rbx
  unsigned int v15; // r13d
  DirectComposition::CAnimationBinding *v16; // rdi
  DirectComposition::CResourceMarshaler *v18; // rbx
  __int64 v19; // rax
  DirectComposition::CResourceMarshaler *v20; // r13
  DirectComposition::CAnimationMarshaler *v21; // rbx
  struct DirectComposition::CAnimationBinding *v22; // [rsp+30h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v23; // [rsp+38h] [rbp-8h] BYREF
  struct DirectComposition::CAnimationBinding *v26; // [rsp+98h] [rbp+58h] BYREF

  v22 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v22, &v26, &v23);
  v7 = (struct DirectComposition::CBaseAnimation **)v22;
  v8 = (struct DirectComposition::CBaseAnimation **)v26;
  v9 = v26;
  if ( v22 )
    v9 = v22;
  v26 = v9;
  v10 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 96LL))(v10, 2LL) )
  {
    v12 = (**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
    if ( v12 )
    {
      v13 = v12 - 16;
      if ( v12 != 16 )
      {
        if ( *(_DWORD *)(v13 + 172) )
        {
          DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
          v18 = 0LL;
          LODWORD(v22) = 0;
          if ( v26
            && (v19 = (***((__int64 (__fastcall ****)(_QWORD))v26 + 3))(*((_QWORD *)v26 + 3)),
                (v18 = (DirectComposition::CResourceMarshaler *)v19) != 0LL)
            && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 96LL))(v19, 150LL) )
          {
            v20 = v18;
            LODWORD(v22) = *((_DWORD *)v18 + 16);
          }
          else
          {
            (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, struct DirectComposition::CAnimationBinding **))(*(_QWORD *)a2 + 184LL))(
              a2,
              a3,
              &v22);
            v20 = v18;
            if ( !v18 )
            {
LABEL_31:
              *(_DWORD *)(v13 + 192) = (_DWORD)v22;
              goto LABEL_7;
            }
          }
          if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v18 + 96LL))(
                 v18,
                 2LL) )
          {
            v21 = (DirectComposition::CResourceMarshaler *)((char *)v18 - 16);
            if ( *(_QWORD *)(v13 + 184)
              || (*(_DWORD *)(v13 + 32) & 0x1000) != 0
              || v21 == (DirectComposition::CAnimationMarshaler *)v13 )
            {
              return (unsigned int)-1073741811;
            }
            if ( v21 )
            {
              *(_QWORD *)(v13 + 184) = v21;
              DirectComposition::CResourceMarshaler::AddRef(v20);
              LOBYTE(v26) = 0;
              DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
                v21,
                (bool *)&v26,
                (__int64 *)(v13 + 200),
                (unsigned __int64 *)(v13 + 208));
              *(_BYTE *)(v13 + 216) ^= ((unsigned __int8)v26 ^ *(_BYTE *)(v13 + 216)) & 1;
              *((_DWORD *)v21 + 8) |= 0x1000u;
            }
          }
          goto LABEL_31;
        }
      }
    }
  }
LABEL_7:
  v14 = (struct DirectComposition::CBaseAnimation **)v23;
  v15 = 0;
  if ( v8 )
    goto LABEL_16;
  if ( v7 && v7[3] != a4 || v23 && *((struct DirectComposition::CBaseAnimation **)v23 + 3) != a4 )
    goto LABEL_12;
  if ( v7 )
    goto LABEL_38;
  if ( !v23 )
  {
LABEL_12:
    v26 = 0LL;
    v16 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 44);
    if ( v16 )
    {
      *((_QWORD *)this + 44) = 0LL;
      DirectComposition::CAnimationBinding::Initialize(v16, a2, a3, a4);
    }
    else
    {
      v15 = DirectComposition::CAnimationBinding::Create(a2, a3, a4, &v26);
      if ( (v15 & 0x80000000) != 0 )
        return v15;
      v16 = v26;
    }
    DirectComposition::CApplicationChannel::NewAddingBinding(this, v16);
LABEL_16:
    if ( !v7 )
    {
      if ( !v14 )
      {
LABEL_18:
        if ( v8 && v8[3] != a4 )
          DirectComposition::CAnimationBinding::Reassign((DirectComposition::CAnimationBinding *)v8, a4, this);
        return v15;
      }
      goto LABEL_40;
    }
LABEL_38:
    if ( v7[3] != a4 )
      DirectComposition::CApplicationChannel::NewRemovingBinding(
        this,
        (struct DirectComposition::CAnimationBinding *)v7);
    return v15;
  }
LABEL_40:
  if ( v14[3] != a4 )
    goto LABEL_18;
  if ( *((_QWORD *)this + 56) )
    DirectComposition::CApplicationChannel::RemoveFromBatchList(
      v11,
      (struct DirectComposition::CAnimationBinding *)v14,
      (struct DirectComposition::CAnimationBinding **)this + 56);
  DirectComposition::CAnimationBinding::RemovingToBound((DirectComposition::CAnimationBinding *)v14);
  if ( v8 )
    DirectComposition::CApplicationChannel::DeleteAddingBinding(this, (struct DirectComposition::CAnimationBinding *)v8);
  return v15;
}
