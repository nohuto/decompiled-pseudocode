/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x140298B38
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14070BBF8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1402983B0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(int a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  NTSTATUS PackageClaims; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v11; // eax
  bool v12; // zf

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, (int)a4, (__int64)a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    v8 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v8;
  }
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v9 = 3014657;
    }
    else
    {
      v11 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v9 = 3014656;
      }
      else if ( (v11 & 0x4000) != 0 )
      {
        v9 = 3014658;
      }
      else if ( (v11 & 4) != 0 )
      {
        v9 = 3014658;
      }
      else if ( (v11 & 0x40400) != 0 )
      {
        v9 = 3014657;
      }
      else if ( (v11 & 0x800) != 0 )
      {
        v9 = 3014657;
      }
      else if ( (v11 & 0x40) != 0 )
      {
        v9 = 3014656;
      }
      else if ( (v11 & 0x1000) != 0 )
      {
        v9 = 3014656;
      }
      else
      {
        v12 = (v11 & 8) == 0;
        v9 = 3014657;
        if ( !v12 )
          v9 = 3014657;
      }
    }
  }
  else
  {
    v9 = 3014656;
  }
  *a3 = v9;
  return v8;
}
