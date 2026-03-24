/*
 * XREFs of ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225CD4
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180226008 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18004EDF4 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??2CClipBrush@@KAPEAX_K@Z @ 0x18016BBCC (--2CClipBrush@@KAPEAX_K@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801C6CA4 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801D6FD0 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180224D00 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180225620 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180226404 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x18023348C (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x180234450 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1802349EC (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180234A34 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x180236F30 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPreTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  const struct DEVICE_INFO *v4; // rax
  int v5; // r13d
  const struct DEVICE_INFO *v6; // r15
  __int64 v7; // r9
  bool v8; // r14
  unsigned int v9; // r12d
  QpcTimeConverter *v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 *v18; // rdx
  bool v19; // cf
  unsigned int v20; // ecx
  struct CInteraction *v21; // rbx
  int v22; // edx
  unsigned int v23; // eax
  char v24; // r10
  CManipulationContext **v25; // r14
  CManipulationContext *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // r10
  unsigned int v29; // eax
  char v30; // r8
  char v31; // r10
  CManipulationContext *v32; // rcx
  bool v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-48h] BYREF
  bool IsMousewheelFrame; // [rsp+98h] [rbp+10h]
  unsigned __int64 v36; // [rsp+A0h] [rbp+18h] BYREF
  struct CInteraction *v37; // [rsp+A8h] [rbp+20h] BYREF

  v4 = CPointerDeviceCache::Update(a2);
  v5 = *((_DWORD *)a2 + 40);
  v6 = v4;
  v7 = 280LL;
  if ( v5 != 5 )
    v7 = 272LL;
  *(_QWORD *)((char *)this + v7) = *((_QWORD *)a2 + 30);
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  v8 = IsMousewheelFrame;
  v9 = 0;
  if ( *((_DWORD *)a2 + 4) )
  {
    v10 = (CManipulationManager *)((char *)this + 304);
    while ( 1 )
    {
      v11 = 248LL * v9;
      if ( v5 == 5 )
      {
        if ( *((_BYTE *)v6 + 48) )
          break;
      }
LABEL_15:
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(v10, *(_QWORD *)((char *)a2 + v11 + 240), &v36) )
      {
        v15 = v36;
      }
      else
      {
        v15 = 1000LL * *(unsigned int *)((char *)a2 + v11 + 224);
        v36 = v15;
      }
      *((_QWORD *)this + 40) = v15;
      if ( v5 == 3 )
        *((_QWORD *)this + 41) = v15;
      v16 = *(_DWORD *)((char *)a2 + v11 + 172);
      if ( (((v16 & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 || (v16 & 0x810000) != 0 || v8 )
      {
        v17 = *((_QWORD *)a2 + 30);
        v18 = (unsigned __int64 *)&v34;
        v19 = (v16 & 0x800000) != 0;
        v37 = 0LL;
        v20 = *(_DWORD *)((char *)a2 + v11 + 352);
        if ( v19 )
          v18 = 0LL;
        v34 = v17;
        CInteraction::ResolveInteractionHandle(v20, v18, &v37);
        v21 = v37;
        if ( v37 )
        {
          v22 = *(_DWORD *)((char *)a2 + v11 + 172);
          if ( (v22 & 0x10000) != 0 || v8 )
          {
            v29 = ConvertToInputType(v5, v22);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v21,
              *(_DWORD *)((char *)a2 + v11 + 164),
              v29,
              v31,
              v30,
              v33);
            if ( (*((_BYTE *)a2 + v11 + 172) & 1) == 0 )
            {
              v32 = (CManipulationContext *)*((_QWORD *)this + 33);
              if ( v32 )
                CManipulationContext::OnContactHoverDepart(v32, *(_DWORD *)((char *)a2 + v11 + 164));
            }
          }
          else if ( (v22 & 0x800000) != 0 )
          {
            v23 = ConvertToInputType(v5, v22);
            CManipulationManager::OnNewContact(
              (__int64)this,
              (__int64)v21,
              *(_DWORD *)((char *)a2 + v11 + 164),
              v23,
              v24,
              v24,
              v33);
          }
          else
          {
            v25 = (CManipulationContext **)((char *)this + 264);
            if ( *((_QWORD *)this + 33) )
              goto LABEL_35;
            v26 = (CManipulationContext *)CClipBrush::operator new();
            if ( v26 )
              v26 = CManipulationContext::CManipulationContext(v26, *((struct CComposition **)this + 2));
            Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
              (__int64 (__fastcall ****)(_QWORD))this + 33,
              (__int64 (__fastcall ***)(_QWORD))v26);
            if ( *v25 )
            {
              CManipulationContext::Initialize(*v25, 0, 0);
              if ( *v25 )
              {
LABEL_35:
                v27 = ConvertToInputType(*(_DWORD *)((char *)a2 + v11 + 160), *(_DWORD *)((char *)a2 + v11 + 172));
                CManipulationContext::OnHoverContact(v28, v21, *(unsigned int *)((char *)a2 + v11 + 164), v27);
              }
            }
            v8 = IsMousewheelFrame;
          }
          (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v21 + 8LL))(v21);
        }
      }
      ++v9;
      v10 = (CManipulationManager *)((char *)this + 304);
      if ( v9 >= *((_DWORD *)a2 + 4) )
        return;
    }
    v12 = *(_QWORD *)((char *)a2 + v11 + 216);
    switch ( *((_DWORD *)v6 + 8) )
    {
      case 2:
        v14 = *((_DWORD *)v6 + 7) - HIDWORD(v12);
        *(_DWORD *)((char *)a2 + v11 + 220) = v12;
        *(_DWORD *)((char *)a2 + v11 + 216) = v14;
        goto LABEL_14;
      case 3:
        *(_DWORD *)((char *)a2 + v11 + 216) = *((_DWORD *)v6 + 6) - v12;
        v13 = *((_DWORD *)v6 + 7);
        v12 >>= 32;
        break;
      case 4:
        *(_DWORD *)((char *)a2 + v11 + 216) = HIDWORD(v12);
        v13 = *((_DWORD *)v6 + 6);
        break;
      default:
LABEL_14:
        *(_QWORD *)((char *)a2 + v11 + 200) = *(_QWORD *)((char *)a2 + v11 + 216);
        goto LABEL_15;
    }
    *(_DWORD *)((char *)a2 + v11 + 220) = v13 - v12;
    goto LABEL_14;
  }
}
