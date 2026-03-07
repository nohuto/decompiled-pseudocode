__int64 __fastcall DxgkGetDWMVerticalBlankEvent(ULONG64 a1)
{
  NTSTATUS DWMVerticalBlankEventInternal; // r8d
  _QWORD *v2; // rdx
  ULONG64 v4; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  void *Handle; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  Handle = 0LL;
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v4 = *(_QWORD *)(a1 + 16);
  DWMVerticalBlankEventInternal = DxgkGetDWMVerticalBlankEventInternal(
                                    *(_OWORD *)a1,
                                    HIDWORD(*(_QWORD *)a1),
                                    *(_QWORD *)(a1 + 8),
                                    (struct _KEVENT **)&Object);
  if ( DWMVerticalBlankEventInternal >= 0 )
    DWMVerticalBlankEventInternal = ObOpenObjectByPointer(
                                      Object,
                                      0,
                                      0LL,
                                      0x100002u,
                                      (POBJECT_TYPE)ExEventObjectType,
                                      1,
                                      &Handle);
  if ( DWMVerticalBlankEventInternal >= 0 )
  {
    v2 = (_QWORD *)v4;
    if ( v4 >= MmUserProbeAddress )
      v2 = (_QWORD *)MmUserProbeAddress;
    *v2 = Handle;
  }
  return (unsigned int)DWMVerticalBlankEventInternal;
}
