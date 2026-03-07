__int64 __fastcall CallfnHkINLPMSG(
        unsigned __int16 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int128 *a4,
        __int64 (*a5)(void),
        struct _PFNCLIENT *a6,
        unsigned int a7)
{
  return fnHkINLPMSG((a2 << 16) | (unsigned int)a1, a3, a4, (__int64)a5, *((_QWORD *)a6 + 19), (a7 >> 1) & 1, &a7);
}
