char __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  char result; // al

  result = ViDifCheckCallbackInterception();
  if ( result )
  {
    ViDifCaptureIoCallbacks(a1);
    return 1;
  }
  return result;
}
