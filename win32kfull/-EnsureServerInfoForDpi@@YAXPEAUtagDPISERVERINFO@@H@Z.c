/*
 * XREFs of ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01C02EC
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x1C00A1E90 (GetDPIServerInfoForDpi.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00B8050 (DeleteMetricsFont.c)
 *     GreTextInitialized @ 0x1C010FB94 (GreTextInitialized.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     CreateScaledFont @ 0x1C01C05F8 (CreateScaledFont.c)
 */

void __fastcall EnsureServerInfoForDpi(struct tagDPISERVERINFO *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  struct HLFONT__ *v6; // rcx
  struct HLFONT__ *v7; // rcx
  _BYTE v8[8]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v9; // [rsp+50h] [rbp-11h]
  __int64 v10[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v11; // [rsp+68h] [rbp+7h] BYREF
  __int64 v12[9]; // [rsp+70h] [rbp+Fh] BYREF

  if ( !*(_DWORD *)a1 )
  {
    v4 = Get96DpiServerInfo();
    if ( (unsigned int)GreTextInitialized(v5) )
    {
      memset_0(v8, 0, 0x68uLL);
      if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v4 + 8), (__int64)v10, (__int64)v10 + 4, 0LL) )
      {
        v6 = (struct HLFONT__ *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 2) = v10[0];
        *((_QWORD *)a1 + 1) = v9;
        DeleteMetricsFont(v6);
      }
      if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v4 + 24), (__int64)&v11, (__int64)&v11 + 4, (__int64)v12) )
      {
        v7 = (struct HLFONT__ *)*((_QWORD *)a1 + 3);
        *((_QWORD *)a1 + 4) = v11;
        *((_QWORD *)a1 + 3) = v10[1];
        DeleteMetricsFont(v7);
      }
      *(_DWORD *)a1 = 1;
    }
    *((_DWORD *)a1 + 1) = (*(_DWORD *)(v4 + 4) * a2 + 48) / 96;
  }
}
