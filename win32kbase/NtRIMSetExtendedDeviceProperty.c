__int64 __fastcall NtRIMSetExtendedDeviceProperty(char *a1, ULONG64 a2, int a3)
{
  ULONG64 v3; // rdi
  int v4; // ebx
  char *v5; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  Object = 0LL;
  if ( !a2 || a3 != 20 )
    goto LABEL_13;
  v4 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 < 0 )
    goto LABEL_14;
  v5 = Object ? (char *)Object + 72 : 0LL;
  if ( (*((_DWORD *)v5 + 50) & 0x80u) != 0
    && (*((_DWORD *)v5 + 46) & 0x2000) != 0
    && !*(_DWORD *)(*((_QWORD *)v5 + 48) + 16LL) )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v7 = *(_OWORD *)v3;
    v8 = *(_DWORD *)(v3 + 16);
    v4 = RIMSetExtendedPointerDeviceProperty(*((_QWORD *)v5 + 59), &v7);
  }
  else
  {
LABEL_13:
    v4 = -1073741811;
  }
LABEL_14:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v4;
}
