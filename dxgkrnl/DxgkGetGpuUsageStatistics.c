struct DXGGLOBAL *__fastcall DxgkGetGpuUsageStatistics(_QWORD *a1)
{
  struct DXGGLOBAL *result; // rax

  result = DXGGLOBAL::GetGlobal();
  *a1 = *((_QWORD *)result + 19);
  return result;
}
