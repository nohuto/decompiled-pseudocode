__int64 __fastcall CManipulationManager::s_ManipulationThreadEndpointProc(
        char *a1,
        const struct MsgCallTypeDefinition *a2)
{
  unsigned int v4; // ebx
  char *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v4 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 32),
         a2,
         a1,
         a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  return v4;
}
