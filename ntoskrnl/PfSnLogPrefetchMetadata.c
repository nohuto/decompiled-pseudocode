/*
 * XREFs of PfSnLogPrefetchMetadata @ 0x14079282C
 * Callers:
 *     PfSnPrefetchMetadata @ 0x14071E150 (PfSnPrefetchMetadata.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PfSnLogPrefetchMetadata(__int64 a1, int a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v5; // rax
  __int16 v6; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+50h] [rbp+7h]
  int v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+5Ch] [rbp+13h]
  __int64 v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  int *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( a1 )
  {
    v17 = a2;
    v3 = &ThreadStart;
    if ( !a3 )
      v3 = &PfSnEvt_PrefetchMetadata_Stop;
    if ( qword_140C6A388 && EtwEventEnabled(qword_140C6A388, v3) )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(a1 + 16 + 2 * v5) );
      v6 = v5;
      UserData.Ptr = (ULONGLONG)&v6;
      v9 = 2 * (unsigned __int16)v5;
      v8 = a1 + 16;
      v11 = a1 + 76;
      v13 = a1 + 80;
      v15 = &v17;
      *(_QWORD *)&UserData.Size = 2LL;
      v10 = 0;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      EtwWrite(qword_140C6A388, v3, 0LL, 5u, &UserData);
    }
  }
}
