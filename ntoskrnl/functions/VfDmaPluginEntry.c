__int64 VfDmaPluginEntry()
{
  int v0; // ebx
  const char *v2; // [rsp+20h] [rbp-39h] BYREF
  int v3; // [rsp+28h] [rbp-31h]
  __int64 v4; // [rsp+30h] [rbp-29h]
  __int64 v5; // [rsp+38h] [rbp-21h]
  const char *v6; // [rsp+40h] [rbp-19h]
  int v7; // [rsp+48h] [rbp-11h]
  __int64 v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+58h] [rbp-1h]
  const char *v10; // [rsp+60h] [rbp+7h]
  int v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  const char *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  v4 = 0LL;
  v5 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  qword_140C36558 = (__int64)ViDmaUninit;
  v2 = "HalAllocateCrashDumpRegisters";
  v6 = "HalDmaAllocateCrashDumpRegistersEx";
  v10 = "HalDmaFreeCrashDumpRegistersEx";
  v14 = "IoGetDmaAdapter";
  v3 = 125;
  v7 = 126;
  v11 = 127;
  v15 = 182;
  v0 = ((__int64 (__fastcall *)(const char **, __int64, __int64, void *))DifRegisterPlugin)(
         &v2,
         4LL,
         7LL,
         &ViDmaSetting);
  if ( v0 >= 0 )
    ViDmaInit();
  return (unsigned int)v0;
}
