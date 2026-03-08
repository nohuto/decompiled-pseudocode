/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C0418
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00A47B4 (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     CreateScaledFont @ 0x1C01C05F8 (CreateScaledFont.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  _QWORD *v2; // rsi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  __int64 v7[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v8; // [rsp+50h] [rbp-38h]
  __int128 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+78h] [rbp-10h]

  if ( *((_WORD *)a1 + 1) )
  {
    v2 = (_QWORD *)Get96DpiMetrics();
    CreateScaledFont(v2[4], (__int64)a1 + 56, (__int64)a1 + 60, 0LL);
    *(_OWORD *)v7 = 0LL;
    v10 = 0LL;
    v8 = 0LL;
    v11 = 0;
    v9 = 0LL;
    if ( !*((_QWORD *)a1 + 2) )
    {
      if ( (unsigned int)CreateScaledFont(*v2, (__int64)a1 + 24, (__int64)a1 + 28, (__int64)v7) )
      {
        v3 = v8;
        v4 = v9;
        *((_DWORD *)a1 + 9) = v8;
        v5 = *((_DWORD *)a1 + 7) + v3 + 2;
        *((_DWORD *)a1 + 8) = v4;
        v6 = HIDWORD(v7[0]) + 1;
        *((_DWORD *)a1 + 11) = v5;
        *((_DWORD *)a1 + 10) = v6;
      }
    }
    CreateScaledFont(v2[6], 0LL, 0LL, 0LL);
    CreateScaledFont(v2[7], 0LL, 0LL, 0LL);
    CreateScaledFont(v2[8], 0LL, 0LL, 0LL);
    *((_WORD *)a1 + 1) = 0;
  }
}
