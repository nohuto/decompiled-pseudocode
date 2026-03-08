/*
 * XREFs of KiIntersectFeaturesWithPolicy @ 0x140A8D294
 * Callers:
 *     KiInitializeXSave @ 0x140A8CAA0 (KiInitializeXSave.c)
 * Callees:
 *     KiGetProcessorInformation @ 0x140398214 (KiGetProcessorInformation.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiIsXSaveFeatureAllowed @ 0x140A8D3E0 (KiIsXSaveFeatureAllowed.c)
 *     KiLoadPolicyFromImage @ 0x140A8D470 (KiLoadPolicyFromImage.c)
 */

__int64 __fastcall KiIntersectFeaturesWithPolicy(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  __int64 v5; // r14
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // ecx
  char IsXSaveFeatureAllowed; // al
  unsigned int v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  result = 0LL;
  v4 = 0;
  v18 = 0LL;
  v5 = 0LL;
  LODWORD(v14) = 0;
  v17 = 0LL;
  v13 = 0;
  v15 = 0LL;
  v16 = 0LL;
  if ( *a2 )
  {
    result = KiLoadPolicyFromImage(a1, &v15, &v16);
    if ( (_DWORD)result == -1073741204 )
    {
      *((_DWORD *)a2 + 5) &= 0xFFFFFFF8;
      *a2 = 0LL;
      a2[67] = 0LL;
    }
    else
    {
      KiGetProcessorInformation(&v17, (_DWORD *)&v17 + 3, &v14, &v13);
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *a2;
      v8 = a2[67] | *a2;
      result = CurrentPrcb->UpdateSignature.QuadPart;
      v18 = result;
      if ( v8 )
      {
        v9 = v15;
        do
        {
          if ( v4 >= 0x40 )
            break;
          if ( (v8 & 1) != 0 )
          {
            result = *(_QWORD *)(v9 + 16);
            if ( _bittest64(&result, v4) )
            {
              result = *(unsigned int *)(v9 + 24);
              v10 = 0;
              v13 = result;
              if ( (_DWORD)result )
              {
                v11 = v13;
                result = v9 + 32;
                v14 = v9 + 32;
                do
                {
                  if ( *(_DWORD *)result == v4 )
                  {
                    IsXSaveFeatureAllowed = KiIsXSaveFeatureAllowed(v9, v10, CurrentPrcb, &v17);
                    v11 = v13;
                    if ( IsXSaveFeatureAllowed )
                      _bittestandset64(&v5, v4);
                    result = v14;
                  }
                  result += 16LL;
                  ++v10;
                  v14 = result;
                }
                while ( v10 < v11 );
              }
            }
          }
          ++v4;
          v8 >>= 1;
        }
        while ( v8 );
      }
      a2[67] &= v5;
      *a2 = v5 & v7;
    }
  }
  return result;
}
