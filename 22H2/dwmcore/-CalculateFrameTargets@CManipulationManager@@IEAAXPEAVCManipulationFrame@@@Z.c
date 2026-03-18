/*
 * XREFs of ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019DDA4
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019FA48 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180031D98 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3C10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x18012D2E2 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18012D302 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1801A7E60 (-ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1801A847C (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 */

void __fastcall CManipulationManager::CalculateFrameTargets(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned int v4; // ebp
  bool IsMousewheelFrame; // r15
  __int64 v6; // rdx
  __int64 v7; // r14
  struct IManipulationContext *v8; // rbx
  int v9; // ebp
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  struct IManipulationContext *v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v6 + 16) )
  {
    do
    {
      v7 = 248LL * v4;
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 160,
        (__int64 (__fastcall ****)(_QWORD))&v14,
        (int *)((char *)a2 + v7 + 372));
      v8 = v14;
      if ( v14 && ((*(_DWORD *)((_BYTE *)a2 + v7 + 380) & 0x40004) != 0 || IsMousewheelFrame) )
      {
        if ( (int)CGestureTargetingManager::ProcessInput(v14, (struct CManipulationFrame *)((char *)a2 + v7 + 368)) < 0 )
        {
          *((_DWORD *)v8 + 6) = 1;
        }
        else if ( *((_DWORD *)v8 + 6) != 1 )
        {
          *((_DWORD *)v8 + 6) = 2;
        }
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v14);
      ++v4;
    }
    while ( v4 < *((_DWORD *)a2 + 4) );
  }
  v9 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v10 = 0LL;
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v10 + *((_QWORD *)this + 23)) + 24LL) == 2 )
      {
        v11 = ConvertToInputType(*((_DWORD *)a2 + 92), *((_DWORD *)a2 + 95));
        CGestureTargetingManager::ProcessInteractions(v12, v11);
      }
      ++v9;
      v13 = *(_QWORD *)(v10 + *((_QWORD *)this + 23));
      v10 += 8LL;
      *(_DWORD *)(v13 + 24) = 0;
    }
    while ( v9 < *((_DWORD *)this + 48) );
  }
}
