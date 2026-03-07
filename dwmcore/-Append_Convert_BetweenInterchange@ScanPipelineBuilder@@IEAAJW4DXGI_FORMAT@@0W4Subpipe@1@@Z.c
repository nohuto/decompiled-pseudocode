__int64 __fastcall ScanPipelineBuilder::Append_Convert_BetweenInterchange(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( (_DWORD)a3 != a2 )
  {
    switch ( (_DWORD)a3 )
    {
      case 2:
        if ( a2 == 11 )
        {
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_128bppABGR_64bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v7 = 395;
        }
        else
        {
          if ( a2 != 87 )
          {
            v3 = -2003304320;
            MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003304320, 0x190u, 0LL);
            return v3;
          }
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_128bppABGR_32bppARGB, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v7 = 389;
        }
        goto LABEL_26;
      case 0xB:
        if ( a2 == 2 )
        {
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_64bppABGR_128bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v7 = 373;
        }
        else
        {
          if ( a2 != 87 )
          {
            v3 = -2003304320;
            MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003304320, 0x17Au, 0LL);
            return v3;
          }
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Convert_64bppABGR_32bppARGB, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v7 = 367;
        }
        goto LABEL_26;
      case 0x57:
        if ( a2 == 2 )
        {
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)GammaConvert_32bppARGB_128bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v7 = 351;
        }
        else
        {
          if ( a2 != 11 )
          {
            v3 = -2003304320;
            MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003304320, 0x164u, 0LL);
            return v3;
          }
          v4 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Convert_32bppARGB_64bppABGR, a3);
          v3 = v4;
          if ( v4 >= 0 )
            return v3;
          v7 = 345;
        }
LABEL_26:
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v7, 0LL);
        break;
    }
  }
  return v3;
}
