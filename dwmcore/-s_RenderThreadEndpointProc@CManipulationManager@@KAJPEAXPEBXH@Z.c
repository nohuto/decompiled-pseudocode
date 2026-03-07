__int64 __fastcall CManipulationManager::s_RenderThreadEndpointProc(
        char *a1,
        const struct MsgCallTypeDefinition *a2,
        int a3)
{
  unsigned int v6; // ebx
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 56),
         a2,
         a1,
         a2,
         a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  return v6;
}
