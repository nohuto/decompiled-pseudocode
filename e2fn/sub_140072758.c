void __fastcall __noreturn sub_140072758(
        int a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  KeBugCheckEx(0x4Cu, a2 | (unsigned __int64)(unsigned int)(a1 << 16), a3, a4, a5);
}
