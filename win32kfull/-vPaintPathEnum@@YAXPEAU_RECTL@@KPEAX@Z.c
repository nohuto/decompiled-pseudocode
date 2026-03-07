void __fastcall vPaintPathEnum(struct _RECTL *a1, __int64 a2, _QWORD *a3)
{
  ((void (__fastcall *)(struct _RECTL *, __int64, _QWORD, _QWORD, _DWORD, _DWORD))*a3)(
    a1,
    a2,
    a3[4],
    *((unsigned int *)a3 + 4),
    *((_DWORD *)a3 + 6),
    *((_DWORD *)a3 + 5));
}
