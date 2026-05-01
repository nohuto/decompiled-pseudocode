/*
 * XREFs of memcpy_s_2 @ 0x18028CEE0
 * Callers:
 *     ?SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z @ 0x18028CCBC (-SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009089A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 */

errno_t __cdecl memcpy_s_2(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  __int64 v4; // rax
  __int128 v5; // xmm1

  if ( !Destination )
    goto LABEL_7;
  if ( !Source )
  {
    memset_0(Destination, 0, 0x100uLL);
LABEL_7:
    *(_DWORD *)_o__errno(Destination, DestinationSize, Source) = 22;
    invalid_parameter_noinfo();
    LODWORD(v4) = 22;
    return v4;
  }
  v4 = 2LL;
  do
  {
    *(_OWORD *)Destination = *(_OWORD *)Source;
    *((_OWORD *)Destination + 1) = *((_OWORD *)Source + 1);
    *((_OWORD *)Destination + 2) = *((_OWORD *)Source + 2);
    *((_OWORD *)Destination + 3) = *((_OWORD *)Source + 3);
    *((_OWORD *)Destination + 4) = *((_OWORD *)Source + 4);
    *((_OWORD *)Destination + 5) = *((_OWORD *)Source + 5);
    *((_OWORD *)Destination + 6) = *((_OWORD *)Source + 6);
    Destination = (char *)Destination + 128;
    v5 = *((_OWORD *)Source + 7);
    Source = (char *)Source + 128;
    *((_OWORD *)Destination - 1) = v5;
    --v4;
  }
  while ( v4 );
  return v4;
}
