__int64 InitializePointerPrediction()
{
  __int64 result; // rax
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  result = gliQpcFreq;
  glTOUCH_DRIVER_HW_STACK_LATENCY = 0;
  glTOUCH_DRIVER_HW_STACK_SAMPLETIME = 0;
  gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = 0;
  v1 = 0LL;
  if ( gliQpcFreq )
  {
    result = ReadPointerDeviceSettings(156LL, &v1);
    if ( (_DWORD)result )
    {
      gPredictorRLSLambdaMin = 3865470464LL;
      gPredictorRLSLambdaMax = 4290672384LL;
      result = 4252017664LL;
      gPredictorRLSExpoSmoothAlpha = 4252017664LL;
      gPredictorRLSDelta = 4294968LL;
      gPredictorRLSLambdaLearningRate = 4294968LL;
    }
  }
  return result;
}
