/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C035CB2C
 * Callers:
 *     NtDxgkVailConnect @ 0x1C035FEE0 (NtDxgkVailConnect.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02DD360 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ??0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z @ 0x1C035BDA8 (--0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C035C084 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C035C26C (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C03624E0 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rsi
  int DefaultSecurityDescriptor; // eax
  int v5; // ebx
  void *v6; // r14
  int v7; // eax
  void *v8; // r12
  DXG_HOST_REMOTEOBJECTCHANNEL *v9; // rax
  DXG_HOST_REMOTEOBJECTCHANNEL *v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  void *v16; // r15
  struct DXGVMBUSCHANNEL *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  char v20; // bl
  char v21; // al
  _BYTE v23[16]; // [rsp+20h] [rbp-10h] BYREF
  void *v24; // [rsp+70h] [rbp+40h] BYREF
  void *v25; // [rsp+78h] [rbp+48h] BYREF
  void *v26; // [rsp+80h] [rbp+50h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v2 = *((_QWORD *)this + 15);
  v3 = (__int64 *)((char *)this + 128);
  if ( !v2 && !*v3 )
  {
    v24 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v24);
    v5 = DefaultSecurityDescriptor;
    if ( DefaultSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL, DefaultSecurityDescriptor);
      v6 = v24;
LABEL_24:
      if ( v6 )
        operator delete(v6);
LABEL_26:
      if ( v5 >= 0 )
        goto LABEL_34;
      goto LABEL_27;
    }
    v7 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 0, 0x10000000u, &v26);
    v5 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      v6 = v24;
      v8 = v26;
      goto LABEL_22;
    }
    v9 = (DXG_HOST_REMOTEOBJECTCHANNEL *)operator new[](0x30uLL, 0x4B677844u, 256LL);
    v6 = v24;
    v8 = v26;
    if ( v9 )
    {
      v10 = DXG_HOST_REMOTEOBJECTCHANNEL::DXG_HOST_REMOTEOBJECTCHANNEL(v9, v24, v26, *((struct _EPROCESS **)this + 13));
      *((_QWORD *)this + 15) = v10;
      if ( v10 )
      {
        v6 = 0LL;
        v8 = 0LL;
        v11 = DXGVMBUSCHANNEL::RegisterSubscriber(
                *((DXGVMBUSCHANNEL **)this + 14),
                0x6F746D72u,
                v10,
                (struct IDXGCHANNEL **)v10 + 1);
        v5 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(3LL, v11);
LABEL_27:
          v19 = *((_QWORD *)this + 15);
          if ( v19 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
            *((_QWORD *)this + 15) = 0LL;
          }
          if ( *v3 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 56LL))(*v3);
            *v3 = 0LL;
          }
          goto LABEL_34;
        }
        v12 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 1, 3u, &v25);
        v5 = v12;
        if ( v12 >= 0 )
        {
          v14 = operator new[](0x38uLL, 0x4B677844u, 256LL);
          if ( v14 )
          {
            v15 = *((_QWORD *)this + 13);
            *(_QWORD *)v14 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
            v16 = 0LL;
            *(_QWORD *)(v14 + 48) = v25;
            *(_QWORD *)(v14 + 8) = 0LL;
            *(_WORD *)(v14 + 16) = 0;
            *(_QWORD *)(v14 + 24) = 0LL;
            *(_QWORD *)(v14 + 32) = 0LL;
            *(_QWORD *)(v14 + 40) = v15;
            v17 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
            *v3 = v14;
            v18 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize((struct _EPROCESS **)v14, v17);
            v5 = v18;
            if ( v18 >= 0 )
              goto LABEL_34;
            WdLogSingleEntry1(3LL, v18);
            goto LABEL_18;
          }
          v13 = -1073741801LL;
          *v3 = 0LL;
          v5 = -1073741801;
        }
        else
        {
          v13 = v12;
        }
        WdLogSingleEntry1(3LL, v13);
        v16 = v25;
LABEL_18:
        if ( !v16 )
          goto LABEL_26;
        operator delete(v16);
        goto LABEL_22;
      }
    }
    else
    {
      *((_QWORD *)this + 15) = 0LL;
    }
    v5 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
LABEL_22:
    if ( v8 )
      operator delete(v8);
    goto LABEL_24;
  }
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 64LL))(*v3);
  if ( v20 || (v5 = -1073740528, v21) )
    v5 = 0;
LABEL_34:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return (unsigned int)v5;
}
