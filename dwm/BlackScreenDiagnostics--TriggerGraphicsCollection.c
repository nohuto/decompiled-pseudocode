__int64 __fastcall BlackScreenDiagnostics::TriggerGraphicsCollection(
        unsigned __int8 a1,
        unsigned __int8 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax
  __int64 v5; // rcx
  _DWORD v6[4]; // [rsp+20h] [rbp-40h] BYREF
  int *v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+38h] [rbp-28h]
  int v9; // [rsp+3Ch] [rbp-24h]
  int v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+44h] [rbp-1Ch]
  unsigned int v12; // [rsp+54h] [rbp-Ch]

  v3 = *a3;
  v6[1] = 0;
  v9 = 0;
  v6[0] = 0;
  v6[3] = 0;
  v6[2] = 1031;
  v7 = &v10;
  v8 = 24;
  v12 = a2 | (2 * a1);
  v11 = v3;
  v10 = 2;
  result = D3DKMTEscape(v6);
  if ( (int)result < 0 )
    return MicrosoftTelemetryAssertTriggeredArgs(v5, (unsigned int)result, (v12 >> 1) & 1);
  return result;
}
