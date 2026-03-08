/*
 * XREFs of ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0248044
 * Callers:
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C024897C (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C00793E0 (SetRITTimer.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C0248350 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 */

void __fastcall InteractiveControlDevice::DetectPressAndHoldGesture(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        unsigned int a3)
{
  int v3; // edi
  __int16 v4; // r14
  unsigned int v7; // r15d
  int v8; // esi
  struct InteractiveControlManager *v9; // rax
  struct InteractiveControlManager *v10; // rcx
  int v11; // r8d
  int v12; // ebp
  int v13; // eax
  struct InteractiveControlManager *v14; // rax
  void *v15; // rdx

  v3 = 0;
  v4 = a3;
  v7 = 128;
  v8 = (a3 >> 9) & 1;
  v9 = InteractiveControlManager::Instance((__int64)this);
  v11 = v8;
  if ( *((_DWORD *)v9 + 39) && (v4 & 0x80) != 0 )
  {
    v12 = *((_DWORD *)a2 + 19);
    if ( *((_QWORD *)this + 44) )
    {
      *((_DWORD *)this + 90) += v12;
      v12 = *((_DWORD *)this + 90);
    }
    v10 = InteractiveControlManager::Instance((__int64)v10);
    v11 = v8;
    if ( (signed int)abs32(v12) > *((_DWORD *)v10 + 41) )
    {
      v7 = 0;
      v3 = 1;
      v11 = 0;
    }
  }
  if ( (v4 & 0x100) != 0 )
    v3 = 1;
  v13 = 0;
  if ( (v4 & 0x100) == 0 )
    v13 = v11;
  if ( v13 )
  {
    *((_DWORD *)this + 90) = 0;
    *((_DWORD *)this + 91) = 1;
    *((_QWORD *)this + 46) = a2;
    v14 = InteractiveControlManager::Instance((__int64)v10);
    *((_QWORD *)this + 44) = SetRITTimer(
                               0LL,
                               *((_DWORD *)v14 + 37),
                               (__int64)lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_,
                               1);
  }
  else if ( v3 )
  {
    v15 = (void *)*((_QWORD *)this + 44);
    if ( v15 )
    {
      FindTimer(0LL, v15, 4u, 1, 0LL);
      *((_QWORD *)this + 44) = 0LL;
      InteractiveControlDevice::FlushBufferedInput(this, v7);
    }
  }
  if ( (v4 & 0x20) != 0 )
    *((_DWORD *)this + 94) = 0;
}
