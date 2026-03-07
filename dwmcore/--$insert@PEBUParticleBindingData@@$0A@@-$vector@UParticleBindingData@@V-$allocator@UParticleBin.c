_QWORD *__fastcall std::vector<ParticleBindingData>::insert<ParticleBindingData const *,0>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        const void *a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&a3[-*a1] >> 3);
  std::vector<ParticleBindingData>::_Insert_range<ParticleBindingData const *>((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + 24 * v6;
  return result;
}
