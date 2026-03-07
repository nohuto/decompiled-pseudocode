void __fastcall DXGGLOBAL::DestroyAdapter(CSERIALIZEDWORKQUEUE ***this, struct DXGADAPTER *a2)
{
  CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(this + 38116, (void (*)(void *))DXGGLOBAL::DelayDestroyAdapterWork, a2);
}
