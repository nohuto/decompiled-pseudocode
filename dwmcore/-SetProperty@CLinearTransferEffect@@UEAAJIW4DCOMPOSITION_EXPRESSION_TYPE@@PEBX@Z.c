/*
 * XREFs of ?SetProperty@CLinearTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802375C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  float *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ebx

  if ( a3 != 18 )
    goto LABEL_22;
  v4 = *a4;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 2;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 2;
              if ( v10 )
              {
                if ( v10 != 1 )
                {
LABEL_22:
                  v14 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0xB0u, 0LL);
                  return v14;
                }
                v11 = 216LL;
              }
              else
              {
                v11 = 212LL;
              }
            }
            else
            {
              v11 = 204LL;
            }
          }
          else
          {
            v11 = 200LL;
          }
        }
        else
        {
          v11 = 192LL;
        }
      }
      else
      {
        v11 = 188LL;
      }
    }
    else
    {
      v11 = 180LL;
    }
  }
  else
  {
    v11 = 176LL;
  }
  v12 = (float *)((char *)a1 + v11);
  if ( !(__int64 *)((char *)a1 + v11) )
    goto LABEL_22;
  if ( *v12 != v4 )
  {
    v13 = *a1;
    *v12 = v4;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v13 + 72))(a1, 0LL, 0LL);
  }
  return v12 == 0LL ? 0x80070057 : 0;
}
