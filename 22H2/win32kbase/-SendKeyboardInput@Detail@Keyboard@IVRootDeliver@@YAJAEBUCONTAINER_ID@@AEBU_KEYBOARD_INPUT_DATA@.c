/*
 * XREFs of ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01F2DEC
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0009460 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE8A4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01F3868 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD0B8 (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
        IVRootDeliver::Keyboard::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        void *a4)
{
  PVOID v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  const struct _KEYBOARD_INPUT_DATA *v9; // r9
  int v10; // edi
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v12[6]; // [rsp+30h] [rbp-30h] BYREF
  char *v13; // [rsp+88h] [rbp+28h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v7 = HMValidateHandleNoSecure((int)a3, 19);
  if ( v7 )
  {
    result = RawInputManagerDeviceObjectResolveHandle(*(char **)(v7 + 24), 3u, 0, (PVOID *)&v13);
    if ( (int)result < 0 )
      return result;
    v6 = v13;
    v11 = *(struct _UNICODE_STRING *)(v13 + 280);
  }
  CIVGenericSerializer::CIVGenericSerializer(v12);
  if ( v12[2] )
  {
    v10 = IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
            (IVRootDeliver::Keyboard::Detail *)v12,
            &v11,
            a2,
            v9);
    if ( v10 >= 0 )
      v10 = ivrIVSend((const struct CIVSerializer *)v12, 1u, this);
  }
  else
  {
    v10 = -1073741801;
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  v12[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12);
  return (unsigned int)v10;
}
