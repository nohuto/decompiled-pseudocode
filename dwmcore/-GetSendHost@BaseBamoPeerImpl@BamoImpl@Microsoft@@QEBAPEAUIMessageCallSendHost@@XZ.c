struct IMessageCallSendHost *__fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v4; // rax

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  if ( !*((_BYTE *)this + 48) )
    return *(struct IMessageCallSendHost **)(*(_QWORD *)(v1 + 32) + 72LL);
  v4 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v1 + 32));
  if ( v4 )
    return (struct Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)v4 + 16);
  return (struct IMessageCallSendHost *)v2;
}
