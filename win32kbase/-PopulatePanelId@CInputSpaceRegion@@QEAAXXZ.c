void __fastcall CInputSpaceRegion::PopulatePanelId(CInputSpaceRegion *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = 0LL;
  if ( (int)DrvDxgkGetMonitorDeviceObject((char *)this + 36, *((unsigned int *)this + 11), &Object, &v2) >= 0 )
  {
    RIMGetPanelId(v2, (char *)this + 48);
    ObfDereferenceObject(Object);
  }
}
