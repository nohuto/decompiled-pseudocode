__int64 __fastcall UmfdQueryGlyphMetricsPlusBits(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  unsigned int v11; // ecx
  _QWORD v13[6]; // [rsp+28h] [rbp-49h] BYREF
  int v14; // [rsp+58h] [rbp-19h]
  int v15; // [rsp+5Ch] [rbp-15h]
  __int64 v16; // [rsp+60h] [rbp-11h]
  __int128 v17; // [rsp+68h] [rbp-9h]
  int v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+7Ch] [rbp+Bh]
  __int64 v20; // [rsp+80h] [rbp+Fh]
  __int64 v21; // [rsp+88h] [rbp+17h]
  __int64 v22; // [rsp+90h] [rbp+1Fh]
  __int128 v23; // [rsp+98h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+37h]

  FontDriverDdiRequest::FontDriverDdiRequest(v13, 2LL);
  v22 = 0LL;
  v24 = 0LL;
  v13[0] = &QueryGlyphMetricsPlusBitsRequest::`vftable';
  v20 = a5;
  v13[5] = a1;
  v21 = a6;
  v23 = 0LL;
  v14 = 1;
  v16 = a2;
  v15 = a3;
  v17 = 0LL;
  v18 = a4;
  v19 = -1;
  v10 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 8LL), v13);
  v11 = v19;
  if ( v10 < 0 )
    return (unsigned int)-1;
  return v11;
}
