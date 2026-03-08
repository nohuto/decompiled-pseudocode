/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800C0094
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF040 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800C0170 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180228D04 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180279264 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  bool v5; // bl
  unsigned int v9; // edi
  __int64 v10; // r14
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // r9d
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( a2 + 8 < a2 )
  {
    v15 = -2147024362;
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x1F4u, 0LL);
    goto LABEL_59;
  }
  if ( a2 + 8 > *((_DWORD *)this + 92) )
  {
    v15 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147483637, 0x1F9u, 0LL);
    v9 = -2147483637;
LABEL_59:
    v20 = v15;
    v24 = 1464;
    goto LABEL_60;
  }
  v9 = 0;
  v10 = *((_QWORD *)this + 45) + a2;
  v11 = *(_DWORD *)v10;
  if ( !*(_DWORD *)v10 )
  {
LABEL_11:
    *a4 = v5;
    return v9;
  }
  if ( v11 > 52 )
  {
    v21 = v11 - 69;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v19 = v23 - 33;
          if ( v19 )
          {
            if ( v19 != 161 )
              goto LABEL_44;
            v12 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
            v9 = v12;
            if ( v12 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 265;
              *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
              *((_OWORD *)a3 + 1) = *(_OWORD *)(v10 + 24);
              *((_OWORD *)a3 + 2) = *(_OWORD *)(v10 + 40);
              *((_OWORD *)a3 + 3) = *(_OWORD *)(v10 + 56);
              goto LABEL_8;
            }
            v24 = 1541;
          }
          else
          {
            v12 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
            v9 = v12;
            if ( v12 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 104;
              *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
              *((_QWORD *)a3 + 2) = *(_QWORD *)(v10 + 24);
              goto LABEL_8;
            }
            v24 = 1534;
          }
          goto LABEL_23;
        }
        v12 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v9 = v12;
        if ( v12 < 0 )
        {
          v24 = 1527;
          goto LABEL_23;
        }
        *((_DWORD *)a3 + 18) = 71;
      }
      else
      {
        v12 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v9 = v12;
        if ( v12 < 0 )
        {
          v24 = 1520;
          goto LABEL_23;
        }
        *((_DWORD *)a3 + 18) = 70;
      }
    }
    else
    {
      v12 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v9 = v12;
      if ( v12 < 0 )
      {
        v24 = 1513;
        goto LABEL_23;
      }
      *((_DWORD *)a3 + 18) = 69;
    }
    *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
    goto LABEL_8;
  }
  if ( v11 == 52 )
  {
    v12 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
    v9 = v12;
    if ( v12 >= 0 )
    {
      *((_DWORD *)a3 + 18) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(v10 + 8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v10 + 16);
LABEL_8:
      *((_BYTE *)a3 + 76) = 1;
      if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
        CExpression::LogCacheAccess(this, 1, a2, a3);
      v5 = 1;
      goto LABEL_11;
    }
    v24 = 1506;
    goto LABEL_23;
  }
  v16 = v11 - 11;
  if ( v16 )
  {
    v17 = v16 - 6;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 17;
        if ( v19 )
        {
          if ( v19 == 7 )
          {
            v12 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
            v9 = v12;
            if ( v12 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 42;
              *(_DWORD *)a3 = *(_DWORD *)(v10 + 8);
              goto LABEL_8;
            }
            v24 = 1548;
            goto LABEL_23;
          }
LABEL_44:
          v9 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x628u, 0LL);
          return v9;
        }
        v12 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v9 = v12;
        if ( v12 >= 0 )
        {
          *((_DWORD *)a3 + 18) = 35;
          *(_QWORD *)a3 = *(_QWORD *)(v10 + 8);
          goto LABEL_8;
        }
        v24 = 1499;
      }
      else
      {
        v12 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v9 = v12;
        if ( v12 >= 0 )
        {
          *(_DWORD *)a3 = *(_DWORD *)(v10 + 8);
          *((_DWORD *)a3 + 18) = 18;
          goto LABEL_8;
        }
        v24 = 1492;
      }
    }
    else
    {
      v12 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v9 = v12;
      if ( v12 >= 0 )
      {
        *(_BYTE *)a3 = *(_BYTE *)(v10 + 8);
        *((_DWORD *)a3 + 18) = 17;
        goto LABEL_8;
      }
      v24 = 1485;
    }
LABEL_23:
    v20 = v12;
LABEL_60:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v20, v24, 0LL);
    return v9;
  }
  if ( *((_DWORD *)a3 + 18) == 11 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x622u, 0LL);
  return v9;
}
