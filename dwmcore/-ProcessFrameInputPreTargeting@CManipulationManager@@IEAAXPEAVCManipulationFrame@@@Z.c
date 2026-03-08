/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C478 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180031CA8 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180129132 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ??2CParticleVector2Behavior@@CAPEAX_K@Z @ 0x18019A474 (--2CParticleVector2Behavior@@CAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18019A4F4 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18019B9B8 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18019CBB0 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801A015C (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1801A11A0 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801A17F8 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801A184C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801A3D00 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180209824 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  const struct DEVICE_INFO *v4; // rax
  int v5; // r12d
  const struct DEVICE_INFO *v6; // r15
  __int64 v7; // r9
  bool v8; // r14
  unsigned int v9; // r13d
  QpcTimeConverter *v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // edx
  __int128 v17; // xmm0
  bool v18; // cf
  __int128 v19; // xmm1
  unsigned __int64 *v20; // rdx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  unsigned int v28; // ecx
  struct CInteraction *v29; // rbx
  int v30; // edx
  unsigned int v31; // eax
  char v32; // r10
  CManipulationContext **v33; // r14
  CManipulationContext *v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // eax
  char v37; // r8
  char v38; // r10
  __int64 v39; // rdx
  CManipulationContext *v40; // rcx
  void *v41; // [rsp+30h] [rbp-E8h]
  __int64 v42; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v43; // [rsp+50h] [rbp-C8h]
  __int128 v44; // [rsp+60h] [rbp-B8h]
  __int128 v45; // [rsp+70h] [rbp-A8h]
  __int128 v46; // [rsp+80h] [rbp-98h]
  __int128 v47; // [rsp+90h] [rbp-88h]
  __int128 v48; // [rsp+A0h] [rbp-78h]
  __int128 v49; // [rsp+B0h] [rbp-68h]
  __int128 v50; // [rsp+C0h] [rbp-58h]
  __int128 v51; // [rsp+D0h] [rbp-48h]
  bool IsMousewheelFrame; // [rsp+128h] [rbp+10h]
  unsigned __int64 v53; // [rsp+130h] [rbp+18h] BYREF
  struct CInteraction *v54; // [rsp+138h] [rbp+20h] BYREF

  v4 = CPointerDeviceCache::Update(a2);
  v5 = *((_DWORD *)a2 + 92);
  v6 = v4;
  v7 = 256LL;
  if ( v5 != 5 )
    v7 = 248LL;
  *(_QWORD *)((char *)this + v7) = *((_QWORD *)a2 + 56);
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  v8 = IsMousewheelFrame;
  v9 = 0;
  if ( *((_DWORD *)a2 + 4) )
  {
    v10 = (CManipulationManager *)((char *)this + 280);
    while ( 1 )
    {
      v11 = 248LL * v9;
      if ( v5 == 5 )
      {
        if ( *((_BYTE *)v6 + 48) )
          break;
      }
LABEL_15:
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(v10, *(_QWORD *)((char *)a2 + v11 + 448), &v53) )
      {
        v15 = v53;
      }
      else
      {
        v15 = 1000LL * *(unsigned int *)((char *)a2 + v11 + 432);
        v53 = v15;
      }
      *((_QWORD *)this + 37) = v15;
      if ( v5 == 3 )
        *((_QWORD *)this + 38) = v15;
      v16 = *(_DWORD *)((char *)a2 + v11 + 380);
      if ( (((v16 & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 || (v16 & 0x810000) != 0 || v8 )
      {
        v17 = *((_OWORD *)a2 + 2);
        v18 = (v16 & 0x800000) != 0;
        v19 = *((_OWORD *)a2 + 3);
        v20 = (unsigned __int64 *)&v42;
        v54 = 0LL;
        v43 = v17;
        if ( v18 )
          v20 = 0LL;
        v21 = *((_OWORD *)a2 + 4);
        v44 = v19;
        v22 = *((_OWORD *)a2 + 5);
        v45 = v21;
        v23 = *((_OWORD *)a2 + 6);
        v46 = v22;
        v24 = *((_OWORD *)a2 + 7);
        v47 = v23;
        v25 = *((_OWORD *)a2 + 8);
        v48 = v24;
        v26 = *((_OWORD *)a2 + 9);
        v49 = v25;
        v27 = *((_OWORD *)a2 + 10);
        v50 = v26;
        v51 = v27;
        v28 = *(_DWORD *)((char *)a2 + v11 + 560);
        v42 = v43;
        CInteraction::ResolveInteractionHandle(v28, v20, &v54);
        v29 = v54;
        if ( v54 )
        {
          v30 = *(_DWORD *)((char *)a2 + v11 + 380);
          if ( (v30 & 0x10000) != 0 || v8 )
          {
            CManipulationManager::s_needsStopAndEndInertia = 0;
            v36 = ConvertToInputType(v5, v30);
            LOBYTE(v41) = v37;
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v29,
              *(_DWORD *)((char *)a2 + v11 + 372),
              v36,
              v38,
              v37,
              v41);
            if ( CManipulationManager::s_needsStopAndEndInertia )
            {
              v39 = *(unsigned int *)((char *)a2 + v11 + 372);
              CManipulationManager::s_needsStopAndEndInertia = 0;
              StopAndEndInertia(0LL, v39);
            }
            if ( (*((_BYTE *)a2 + v11 + 380) & 1) == 0 )
            {
              v40 = (CManipulationContext *)*((_QWORD *)this + 30);
              if ( v40 )
                CManipulationContext::OnContactHoverDepart(v40, *(_DWORD *)((char *)a2 + v11 + 372));
            }
          }
          else if ( (v30 & 0x800000) != 0 )
          {
            v31 = ConvertToInputType(v5, v30);
            LOBYTE(v41) = v32;
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v29,
              *(_DWORD *)((char *)a2 + v11 + 372),
              v31,
              v32,
              v32,
              v41);
          }
          else
          {
            v33 = (CManipulationContext **)((char *)this + 240);
            if ( *((_QWORD *)this + 30) )
              goto LABEL_37;
            v34 = (CManipulationContext *)CParticleVector2Behavior::operator new();
            if ( v34 )
              v34 = CManipulationContext::CManipulationContext(v34, *((struct CComposition **)this + 2));
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
              (__int64 (__fastcall ****)(_QWORD))this + 30,
              (__int64 (__fastcall ***)(_QWORD))v34);
            if ( *v33 )
              CManipulationContext::Initialize(*v33, 0, 0);
            if ( *v33 )
            {
LABEL_37:
              v35 = ConvertToInputType(*(_DWORD *)((char *)a2 + v11 + 368), *(_DWORD *)((char *)a2 + v11 + 380));
              CManipulationContext::OnHoverContact(*v33, v29, *(unsigned int *)((char *)a2 + v11 + 372), v35);
            }
            v8 = IsMousewheelFrame;
          }
          if ( v29 )
            (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      ++v9;
      v10 = (CManipulationManager *)((char *)this + 280);
      if ( v9 >= *((_DWORD *)a2 + 4) )
        return;
    }
    v12 = *(_QWORD *)((char *)a2 + v11 + 424);
    switch ( *((_DWORD *)v6 + 8) )
    {
      case 2:
        v14 = *((_DWORD *)v6 + 7) - HIDWORD(v12);
        *(_DWORD *)((char *)a2 + v11 + 428) = v12;
        *(_DWORD *)((char *)a2 + v11 + 424) = v14;
        goto LABEL_14;
      case 3:
        *(_DWORD *)((char *)a2 + v11 + 424) = *((_DWORD *)v6 + 6) - v12;
        v13 = *((_DWORD *)v6 + 7);
        v12 >>= 32;
        break;
      case 4:
        *(_DWORD *)((char *)a2 + v11 + 424) = HIDWORD(v12);
        v13 = *((_DWORD *)v6 + 6);
        break;
      default:
LABEL_14:
        *(_QWORD *)((char *)a2 + v11 + 408) = *(_QWORD *)((char *)a2 + v11 + 424);
        goto LABEL_15;
    }
    *(_DWORD *)((char *)a2 + v11 + 428) = v13 - v12;
    goto LABEL_14;
  }
}
