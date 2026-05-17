/*
 * XREFs of RtlSwitchedVVI @ 0x18003CC40
 * Callers:
 *     <none>
 * Callees:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlpVerCompare @ 0x18003CF80 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18007B308 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall RtlSwitchedVVI(__int64 a1, int a2, __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  unsigned int v8; // ecx
  char v9; // al
  __int64 v10; // rdi
  char v11; // al
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r10d
  int v17; // r11d
  int v18; // r9d
  int ConditionMask; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _BYTE v24[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v25[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(&v25[1], 0, 0x118uLL);
  v25[0] = 284;
  result = SwitchedRtlGetVersion(v25);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 && *(_WORD *)(a1 + 280) )
    {
      v16 = 0;
      v17 = *(unsigned __int16 *)(a1 + 280);
      do
      {
        v18 = 1 << v16;
        if ( (v17 & (1 << v16)) != 0 )
        {
          if ( a3 >= 0 )
            ConditionMask = 0;
          else
            ConditionMask = RtlpVerGetConditionMask(a3, 64LL);
          v20 = ConditionMask - 6;
          if ( v20 )
          {
            if ( v20 != 1 )
              return 3221225485LL;
            if ( (v25[70] & (unsigned __int16)v18) != 0 )
              v6 = 1;
          }
          else if ( (v25[70] & (unsigned __int16)v18) == 0 )
          {
            return 3221225561LL;
          }
        }
        ++v16;
      }
      while ( v16 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(a3, 64LL) == 7 && !v6 )
        return 3221225561LL;
    }
    v8 = 2;
    v9 = 1;
    v24[0] = 1;
    LODWORD(v10) = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
      {
        LODWORD(v10) = (unsigned __int8)((unsigned __int64)a3 >> 4);
      }
      else
      {
        v11 = 0;
        do
        {
          ++v11;
          v8 >>= 1;
        }
        while ( v8 );
        v10 = ((unsigned __int64)a3 >> (3 * (v11 - 1))) & 7;
      }
      v12 = (unsigned __int8)RtlpVerCompare(v10, *(_DWORD *)(a1 + 4), v25[1], (unsigned int)v24, 0) == 0;
      v9 = v24[0];
      if ( v12 )
      {
        if ( !v24[0] )
          return 3221225561LL;
      }
      else if ( !v24[0] )
      {
LABEL_11:
        if ( (v4 & 4) != 0 )
        {
          v15 = a3 >= 0 ? BYTE2(a3) : RtlpVerGetConditionMask(a3, 4LL);
          if ( !(unsigned __int8)RtlpVerCompare(v15, *(_DWORD *)(a1 + 12), v25[3], (unsigned int)v24, 0) )
            return 3221225561LL;
        }
        if ( (v4 & 8) != 0 )
        {
          v14 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 8LL);
          if ( !(unsigned __int8)RtlpVerCompare(v14, *(_DWORD *)(a1 + 16), v25[4], (unsigned int)v24, 0) )
            return 3221225561LL;
        }
        if ( v4 < 0 )
        {
          v13 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 128LL);
          if ( !(unsigned __int8)RtlpVerCompare(
                                   v13,
                                   *(unsigned __int8 *)(a1 + 282),
                                   BYTE2(v25[70]),
                                   (unsigned int)v24,
                                   0) )
            return 3221225561LL;
        }
        return 0LL;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_17;
    if ( (_DWORD)v10 == 1 )
    {
      if ( a3 >= 0 )
        v21 = (unsigned __int8)((unsigned __int64)a3 >> 2);
      else
        v21 = RtlpVerGetConditionMask(a3, 1LL);
      LODWORD(v10) = v21;
    }
    v12 = (unsigned __int8)RtlpVerCompare(v10, *(_DWORD *)(a1 + 8), v25[2], (unsigned int)v24, 1) == 0;
    v9 = v24[0];
    if ( v12 )
    {
      if ( !v24[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_17:
      if ( !v9 )
        goto LABEL_11;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_19;
    if ( (_DWORD)v10 == 1 )
    {
      if ( a3 < 0 )
        v22 = RtlpVerGetConditionMask(a3, 32LL);
      else
        v22 = 0;
      LODWORD(v10) = v22;
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, *(unsigned __int16 *)(a1 + 276), LOWORD(v25[69]), (unsigned int)v24, 0) )
    {
      v9 = v24[0];
LABEL_19:
      if ( !v9 )
        goto LABEL_11;
LABEL_20:
      if ( (v4 & 0x10) != 0 )
      {
        if ( (_DWORD)v10 == 1 )
        {
          if ( a3 < 0 )
            v23 = RtlpVerGetConditionMask(a3, 16LL);
          else
            v23 = 0;
          LODWORD(v10) = v23;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v10,
                                 *(unsigned __int16 *)(a1 + 278),
                                 HIWORD(v25[69]),
                                 (unsigned int)v24,
                                 1) )
          return 3221225561LL;
      }
      goto LABEL_11;
    }
    if ( v24[0] )
      goto LABEL_20;
    return 3221225561LL;
  }
  return result;
}
