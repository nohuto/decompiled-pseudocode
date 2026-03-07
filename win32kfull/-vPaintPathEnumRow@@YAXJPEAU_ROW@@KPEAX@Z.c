void __fastcall vPaintPathEnumRow(unsigned int a1, struct _ROW *a2, unsigned int a3, _DWORD *a4)
{
  (*((void (__fastcall **)(struct _ROW *, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))a4 + 1))(
    a2,
    a3,
    a1,
    *((_QWORD *)a4 + 4),
    a4[6],
    a4[4],
    a4[5]);
}
