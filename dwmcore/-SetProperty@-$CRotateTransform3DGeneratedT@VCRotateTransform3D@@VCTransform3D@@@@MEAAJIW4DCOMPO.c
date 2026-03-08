/*
 * XREFs of ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C5C60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    if ( !a2 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 160) )
      {
        v10 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 160) = *a4;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v10 + 72))(a1, 0LL, 0LL);
      }
      return 0;
    }
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              if ( v8 != 1 )
              {
                v12 = 7212;
                goto LABEL_11;
              }
              if ( *(float *)a4 == *(float *)(a1 + 184) )
                return 0;
              *(_DWORD *)(a1 + 184) = *a4;
            }
            else
            {
              if ( *(float *)a4 == *(float *)(a1 + 180) )
                return 0;
              *(_DWORD *)(a1 + 180) = *a4;
            }
          }
          else
          {
            if ( *(float *)a4 == *(float *)(a1 + 176) )
              return 0;
            *(_DWORD *)(a1 + 176) = *a4;
          }
        }
        else
        {
          if ( *(float *)a4 == *(float *)(a1 + 172) )
            return 0;
          *(_DWORD *)(a1 + 172) = *a4;
        }
      }
      else
      {
        if ( *(float *)a4 == *(float *)(a1 + 168) )
          return 0;
        *(_DWORD *)(a1 + 168) = *a4;
      }
    }
    else
    {
      if ( *(float *)a4 == *(float *)(a1 + 164) )
        return 0;
      *(_DWORD *)(a1 + 164) = *a4;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    return 0;
  }
  v12 = 7217;
LABEL_11:
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v12, 0LL);
  return v9;
}
