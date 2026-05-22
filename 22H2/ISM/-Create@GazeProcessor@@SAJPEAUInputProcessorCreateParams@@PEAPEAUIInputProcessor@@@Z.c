/*
 * XREFs of ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801889A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180188628 (--0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x180188AE4 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  GazeProcessor *v4; // rax
  GazeProcessor *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (GazeProcessor *)RefCountedObject::operator new(0x170uLL);
  if ( v4 )
    v5 = GazeProcessor::GazeProcessor(v4, *a1, a1[1]);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = GazeProcessor::Initialize(v5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = (GazeProcessor *)((char *)v5 + 24);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
