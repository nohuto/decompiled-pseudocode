__int64 __fastcall rimTransformGeometry(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        int a2,
        unsigned int *a3,
        int a4,
        __int64 a5)
{
  EtwTracePointerDeviceTransformationStart(*a3);
  if ( *((_DWORD *)a1 + 6) == 7 )
  {
    RIMApplyPTPTranslation(a1, (__int64)a3);
  }
  else
  {
    RIMApplyTransforms((_DWORD)a1, a2, (_DWORD)a3, a4, a5);
    rimComputeHimetricGeometry(a1, a3, a3 + 8);
  }
  return EtwTracePointerDeviceTransformationStop(*a3);
}
