/*
 * XREFs of sub_18005B160 @ 0x18005B160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005B54C @ 0x18005B54C (sub_18005B54C.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18005B160(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+40h] [rbp-40h] BYREF
  int v7; // [rsp+50h] [rbp-30h]
  __int128 v8; // [rsp+60h] [rbp-20h] BYREF
  __int64 v9; // [rsp+70h] [rbp-10h]
  __int64 v10; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+40h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  v9 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  WORD4(v8) = 0;
  v6 = xmmword_180160C48;
  LOWORD(v8) = 2;
  v7 = 2;
  v3 = sub_18005B54C(a1, &v6, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v10) = v3;
      v12 = (__int64)"SpatialAudioDevicePropertyWriter::SignalChange";
      LODWORD(v11) = 187;
      sub_180109778((int)&dword_18019C480, (__int64)&v12, (__int64)&v11, (__int64)&v10);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 96) = 0;
  }
  return v4;
}
