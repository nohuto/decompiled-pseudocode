__int64 __fastcall IovBuildAsynchronousFsdRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return XdvIopBuildAsynchronousFsdRequest(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           retaddr,
           (__int64 (__fastcall *)(__int64, __int64, __int64))IopBuildAsynchronousFsdRequest);
}
