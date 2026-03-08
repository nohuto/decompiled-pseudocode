/*
 * XREFs of VidSchiCaptureProcessName @ 0x1C0046E6C
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C0109A80 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCaptureProcessName(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  const char *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al

  result = *(_QWORD *)(a1 + 32);
  if ( a1 == *(_QWORD *)(result + 240) )
  {
    v4 = "System";
    goto LABEL_9;
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 && *(_QWORD *)(v5 + 8) )
  {
    result = PsGetProcessImageFileName(*(_QWORD *)(v5 + 2656));
    v4 = (const char *)result;
    if ( !result )
    {
LABEL_6:
      *a2 = 0;
      return result;
    }
  }
  else
  {
    v4 = "Unknown";
  }
  if ( !*v4 )
    goto LABEL_6;
LABEL_9:
  v6 = 16LL;
  v7 = v4 - a2;
  do
  {
    if ( v6 == -2147483630 )
      break;
    v8 = a2[v7];
    if ( !v8 )
      break;
    *a2++ = v8;
    --v6;
  }
  while ( v6 );
  result = (__int64)(a2 - 1);
  if ( v6 )
    result = (__int64)a2;
  *(_BYTE *)result = 0;
  return result;
}
