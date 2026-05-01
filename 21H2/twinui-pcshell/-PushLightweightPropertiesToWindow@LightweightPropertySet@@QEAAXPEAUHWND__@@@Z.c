/*
 * XREFs of ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1803393C4
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180342980 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LightweightPropertySet::PushLightweightPropertiesToWindow(LightweightPropertySet *this, HWND a2)
{
  unsigned __int64 i; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  const WCHAR *StringRawBuffer; // rax

  for ( i = 0LL; i < *((_QWORD *)this + 1); ++i )
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    v6 = *(_DWORD *)(v5 + 16);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 8), 0LL);
    SetPropW(a2, StringRawBuffer, (HANDLE)v6);
  }
}
