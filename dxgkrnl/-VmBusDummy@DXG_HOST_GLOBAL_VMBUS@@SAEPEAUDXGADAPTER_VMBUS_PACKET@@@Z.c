unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDummy(struct VMBPACKETCOMPLETION__ **a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  VmBusCompletePacket(a1[16], &v2, 4u);
  return 1;
}
