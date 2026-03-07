__int64 __fastcall IopfCallDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // r9

  if ( (char)--*(_BYTE *)(a2 + 67) <= 0 )
    KeBugCheckEx(0x35u, a2, 0LL, 0LL, 0LL);
  v2 = (unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL);
  *(_QWORD *)(a2 + 184) = v2;
  v3 = *v2;
  *((_QWORD *)v2 + 5) = a1;
  if ( (_BYTE)v3 == 22 && (unsigned __int8)(v2[1] - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 8 * v3 + 112))(a1);
}
