/*
 * XREFs of ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180497B60
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180498A18 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x180497DE4 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnPointerDown(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  IUnknown *v6; // rcx
  void *v7; // rcx
  void *v8; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-68h] BYREF
  void *v10; // [rsp+48h] [rbp-40h]
  void *v11; // [rsp+90h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 21) )
  {
    v6 = (IUnknown *)*((_QWORD *)this + 2);
    v11 = 0LL;
    if ( IUnknown_QueryService(
           v6,
           &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
           &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
           &v11) >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 48LL))(v11);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else if ( GetCapture() != *((HWND *)this + 19) && !*((_DWORD *)this + 82) )
  {
    if ( (unsigned int)GetPointerInfo(a2, v9) )
    {
      v11 = v10;
      v8 = v10;
      *(_QWORD *)((char *)this + 316) = v10;
      *(_QWORD *)((char *)this + 308) = v8;
      *((_DWORD *)this + 82) = a2;
      *(struct tagPOINT *)((char *)this + 300) = a3;
    }
    if ( *((_DWORD *)this + 37) == 6 )
      CDragVisual::_OnPressDown(this, a3);
  }
}
