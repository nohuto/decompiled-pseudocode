/*
 * XREFs of PfSnLogOpenVolumesForPrefetch @ 0x14077B144
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x14077A964 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PfSnLogOpenVolumesForPrefetch(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  __int64 v4; // rax
  __int16 v5; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  __int64 v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+68h] [rbp+2Fh]
  __int64 v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]

  if ( a1 )
  {
    v2 = (const EVENT_DESCRIPTOR *)PfSnEvt_OpenVolumes_Start;
    if ( !a2 )
      v2 = &PfSnEvt_OpenVolumes_Stop;
    if ( qword_140C6A388 && EtwEventEnabled(qword_140C6A388, v2) )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( *(_WORD *)(a1 + 16 + 2 * v4) );
      v5 = v4;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = 2 * (unsigned __int16)v4;
      v7 = a1 + 16;
      v10 = a1 + 76;
      v12 = a1 + 80;
      *(_QWORD *)&UserData.Size = 2LL;
      v9 = 0;
      v11 = 4LL;
      v13 = 4LL;
      EtwWrite(qword_140C6A388, v2, 0LL, 4u, &UserData);
    }
  }
}
