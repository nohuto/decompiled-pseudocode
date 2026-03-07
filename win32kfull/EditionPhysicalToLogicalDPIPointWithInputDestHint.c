struct tagPOINT __fastcall EditionPhysicalToLogicalDPIPointWithInputDestHint(
        struct tagPOINT *a1,
        struct tagPOINT a2,
        const struct _SUBPIXELS *a3,
        __int64 a4)
{
  const struct tagWND *v6; // rbx
  struct tagPOINT result; // rax
  struct tagPOINT v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( *(_DWORD *)(a4 + 92) == 2 && (v6 = *(const struct tagWND **)(a4 + 80)) != 0LL )
  {
    if ( !(unsigned int)TransformVectorWithInputTargetPrecedence(*(const struct tagWND **)(a4 + 80), (int)&v8, (int)a3) )
      PhysicalToLogicalDPIPointWithHitTest(&v8, &v8, a3, v6);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 3368);
  }
  result = v8;
  *a1 = v8;
  return result;
}
